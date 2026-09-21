#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 yaw = Matrix3::rotateYMatrix(yawDegrees);

    // Writable upload path.
    float* raw = (float*)yaw;

    // Read-only upload path keeps the matrix intact.
    const Matrix3& frozen = yaw;
    const float* readOnly = (const float*)frozen;

    Log::print(("m00: " + std::to_string(raw[0]) + " / " + std::to_string(readOnly[0])).c_str());
}
