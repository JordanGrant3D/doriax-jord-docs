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
    Object leg(getScene());
    Body3D legBody = leg.getBody3D();
    legBody.createCapsuleShape(0.4f, 0.14f);
    legBody.setType(BodyType::DYNAMIC);
    legBody.load();
    Joint3D hip(getScene());
    hip.setSwingTwistJoint(torso.getEntity(), leg.getEntity(), leg.getPosition(), Vector3(0.0f, -1.0f, 0.0f), Vector3::UNIT_X, strideLimit, strideLimit, -20.0f, 20.0f);
}

void testerScript::onUpdate() {
    Joint3D hip(getScene(), getEntity());
    Log::print(strideLimit > 0.0f ? "ragdoll hip swinging" : "ragdoll hip locked");
}
