#include "testerScript.h"

#include "Body3D.h"
#include "Object.h"
#include "Log.h"
#include "Input.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body3D body = obj.getBody3D();
    body.createBoxShape(0.6f, 1.8f, 0.6f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body3D body = obj.getBody3D();
    Vector3 vel = body.getLinearVelocity();
    float moveX = 0.0f;
    float moveZ = 0.0f;
    if (Input::isKeyPressed(D_KEY_W)) { moveZ -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_S)) { moveZ += 1.0f; }
    if (Input::isKeyPressed(D_KEY_A)) { moveX -= 1.0f; }
    if (Input::isKeyPressed(D_KEY_D)) { moveX += 1.0f; }
    vel.x = moveX * moveSpeed;
    vel.z = moveZ * moveSpeed;
    if (Input::isKeyPressed(D_KEY_SPACE) && vel.y > -0.1f && vel.y < 0.1f) {
        vel.y = jumpForce;
    }
    body.setLinearVelocity(vel);
    body.setAngularVelocityClamped(Vector3::ZERO);
    bool isJumping = vel.y > 0.1f || vel.y < -0.1f;
    Log::print(isJumping ? "character airborne" : "character grounded");
}
