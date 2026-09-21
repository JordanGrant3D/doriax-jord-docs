#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // YXZ: yaw first, the CharacterController chase-camera convention.
    Quaternion camRot;
    camRot.fromEulerAngles(camPitch, camYaw, 0.0f, RotationOrder::YXZ);
    obj.setRotation(camRot);

    Log::print(("camRot: " + camRot.toString()).c_str());
}
