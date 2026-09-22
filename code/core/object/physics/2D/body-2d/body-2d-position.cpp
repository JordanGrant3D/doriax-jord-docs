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
    Vector2 spawn(spawnX, spawnY);
    if (Input::isKeyPressed(D_KEY_R)) {
        body.setPosition(spawn);
        body.setLinearVelocity(Vector2::ZERO);
        Log::print("player respawned");
        return;
    }
    Vector2 pos = body.getPosition();
    if (Input::isKeyPressed(D_KEY_A)) {
        body.setPosition(Vector2(pos.x - stepSize, pos.y));
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        body.setPosition(Vector2(pos.x + stepSize, pos.y));
    }
    if (Input::isKeyPressed(D_KEY_W)) {
        pos = body.getPosition();
        body.setPosition(Vector2(pos.x, pos.y - stepSize));
    }
    if (Input::isKeyPressed(D_KEY_S)) {
        pos = body.getPosition();
        body.setPosition(Vector2(pos.x, pos.y + stepSize));
    }
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Vector2 pos = body.getPosition();
    Log::print(pos.x < spawnX ? "left of spawn" : "right of spawn");
}
