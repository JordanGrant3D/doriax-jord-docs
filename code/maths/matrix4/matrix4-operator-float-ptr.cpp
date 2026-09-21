#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 pose = Matrix4::rotateYMatrix(yawDegrees);

    // Writable upload path.
    float* raw = (float*)pose;

    // Read-only upload path keeps the matrix intact.
    const Matrix4& frozen = pose;
    const float* readOnly = (const float*)frozen;

    Log::print(("m00: " + std::to_string(raw[0]) + " / " + std::to_string(readOnly[0])).c_str());
}
