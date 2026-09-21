#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Axis-angle spin around world-up, e.g. a pickup turntable.
    Matrix4 spin = Matrix4::rotateMatrix(spinDegrees, Vector3::UNIT_Y);

    // Yaw/pitch look matrix in one call, like CharacterController's camRot.
    Matrix4 look = Matrix4::rotateMatrix(yaw, pitch);
    Vector3 forward = look * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("spin det: " + std::to_string(spin.determinant())).c_str());
    Log::print(("look forward: " + forward.toString()).c_str());
}
