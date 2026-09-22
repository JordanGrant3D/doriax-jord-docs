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
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.createBoxShape(64.0f, 64.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onFixedUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    if (Input::isKeyPressed(D_KEY_A)) {
        body.setAngularVelocity(spinSpeed);
    } else if (Input::isKeyPressed(D_KEY_D)) {
        body.setAngularVelocity(-spinSpeed);
    } else {
        body.setAngularVelocity(0.0f);
    }
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    float spin = body.getAngularVelocity();
    Log::print(spin > -0.01f && spin < 0.01f ? "spin stopped" : "spinning");
}
