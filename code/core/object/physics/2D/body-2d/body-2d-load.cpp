#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Input.h"
#include "Engine.h"
#include "Vector2.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
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

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Vector2 vel = body.getLinearVelocity();
    float moveX = 0.0f;
    float moveY = 0.0f;
    if (Input::isKeyPressed(D_KEY_W)) { moveY += 1.0f; }
    if (Input::isKeyPressed(D_KEY_S)) { moveY -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_A)) { moveX -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_D)) { moveX += 1.0f; }
    vel.x = moveX * moveSpeed;
    vel.y = moveY * moveSpeed;
    body.setLinearVelocity(vel);
    if (Input::isKeyPressed(D_KEY_R)) {
        body.load();
        Log::print("character body reloaded");
    } else {
        Log::print("character running");
    }
}
