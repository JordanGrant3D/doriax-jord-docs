#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 yaw = Matrix4::translateMatrix(1.0f, 2.0f, 3.0f) * Matrix4::rotateYMatrix(yawDegrees);

    // Transposed upload path for row-major shader expectations.
    Matrix4 rowMajor = yaw.transpose();

    Log::print(("row-major m30: " + std::to_string(rowMajor.get(3, 0))).c_str());
}
