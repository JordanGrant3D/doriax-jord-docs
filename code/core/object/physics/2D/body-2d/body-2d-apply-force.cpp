#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "Input.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onFixedUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.createCircleShape(Vector2(16.0f, 16.0f), 16.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onFixedUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    bool thrusting = false;
    if (Input::isKeyPressed(D_KEY_W)) {
        body.applyForceToCenter(Vector2(0.0f, -thrustForce), true);
        thrusting = true;
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        body.applyForce(Vector2(thrustForce, 0.0f), body.getPosition() + Vector2(0.0f, 16.0f), true);
        thrusting = true;
    }
    Log::print(thrusting ? "thrusters firing" : "drifting");
}
