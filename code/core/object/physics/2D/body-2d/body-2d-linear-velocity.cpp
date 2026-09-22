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
    Vector2 vel = body.getLinearVelocity();
    float moveX = 0.0f;
    float moveY = 0.0f;
    if (Input::isKeyPressed(D_KEY_A)) { moveX -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_D)) { moveX += 1.0f; }
    if (Input::isKeyPressed(D_KEY_W)) { moveY -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_S)) { moveY += 1.0f; }
    vel.x = moveX * moveSpeed;
    vel.y = moveY * moveSpeed;
    body.setLinearVelocity(vel);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Vector2 vel = body.getLinearVelocity();
    Log::print(vel.x != 0.0f || vel.y != 0.0f ? "moving" : "idle");
}
