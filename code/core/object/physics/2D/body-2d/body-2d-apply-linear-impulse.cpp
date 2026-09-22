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
    bool kicked = false;
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        body.applyLinearImpulseToCenter(Vector2(0.0f, -jumpImpulse), true);
        kicked = true;
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        body.applyLinearImpulse(Vector2(jumpImpulse, 0.0f), body.getPosition() + Vector2(0.0f, 16.0f), true);
        kicked = true;
    }
    Log::print(kicked ? "impulse applied" : "drifting");
}
