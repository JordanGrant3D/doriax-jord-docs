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
    if (Input::isKeyPressed(D_KEY_R)) {
        body.setAngle(0.0f);
        body.setAngularVelocity(0.0f);
        Log::print("rotation reset");
        return;
    }
    float angle = body.getAngle();
    if (Input::isKeyPressed(D_KEY_A)) {
        body.setAngle(angle + turnStep);
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        body.setAngle(body.getAngle() - turnStep);
    }
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    float angle = body.getAngle();
    Log::print(angle > -0.01f && angle < 0.01f ? "facing forward" : "rotated");
}
