#include "testerScript.h"

#include "Joint3D.h"
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
    Object torso(getScene(), getEntity());
    Body3D torsoBody = torso.getBody3D();
    torsoBody.createCapsuleShape(0.9f, 0.3f);
    torsoBody.setType(BodyType::DYNAMIC);
    torsoBody.load();
    Object head(getScene());
    Body3D headBody = head.getBody3D();
    headBody.createSphereShape(0.22f);
    headBody.setType(BodyType::DYNAMIC);
    headBody.load();
    Joint3D neck(getScene());
    neck.setConeJoint(torso.getEntity(), head.getEntity(), head.getPosition(), Vector3::UNIT_Y);
}

void testerScript::onUpdate() {
    Joint3D neck(getScene(), getEntity());
    Log::print(headMass > 0.0f ? "ragdoll neck within cone limits" : "ragdoll head missing");
}
