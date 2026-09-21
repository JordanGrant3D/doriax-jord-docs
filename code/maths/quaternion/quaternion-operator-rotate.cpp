#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Same camRot CharacterController builds from mouse look.
    Quaternion camRot;
    camRot.fromEulerAngles(camPitch, camYaw, 0.0f, RotationOrder::YXZ);

    Vector3 camForward = camRot * Vector3(0.0f, 0.0f, -1.0f);
    Vector3 camRight = camRot * Vector3(1.0f, 0.0f, 0.0f);

    Log::print(("camForward: " + camForward.toString()).c_str());
    Log::print(("camRight: " + camRight.toString()).c_str());
}
