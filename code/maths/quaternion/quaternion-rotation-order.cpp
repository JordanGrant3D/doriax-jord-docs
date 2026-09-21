#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // YXZ: yaw applied first, exactly like CharacterController's camRot.
    Quaternion camRot;
    camRot.fromEulerAngles(camPitch, camYaw, 0.0f, RotationOrder::YXZ);

    Log::print(("camRot: " + camRot.toString()).c_str());
}
