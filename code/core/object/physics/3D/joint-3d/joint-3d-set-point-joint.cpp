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
    Object arm(getScene());
    Body3D armBody = arm.getBody3D();
    armBody.createCapsuleShape(0.35f, 0.12f);
    armBody.setType(BodyType::DYNAMIC);
    armBody.load();
    Joint3D shoulder(getScene());
    shoulder.setPointJoint(torso.getEntity(), arm.getEntity(), arm.getPosition());
}

void testerScript::onUpdate() {
    Joint3D shoulder(getScene(), getEntity());
    Log::print(limbLength > 0.0f ? "ragdoll shoulder pivoting" : "ragdoll limb missing");
}
