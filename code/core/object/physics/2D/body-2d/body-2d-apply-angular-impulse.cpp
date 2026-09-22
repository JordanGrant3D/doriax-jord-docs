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
    bool spinning = false;
    if (Input::isKeyPressed(D_KEY_A)) {
        body.applyAngularImpulse(spinImpulse, true);
        spinning = true;
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        body.applyAngularImpulse(-spinImpulse, true);
        spinning = true;
    }
    Log::print(spinning ? "spin kick applied" : "holding rotation");
}
