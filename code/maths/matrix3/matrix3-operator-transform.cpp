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

    // World-space move axes from one yaw matrix, like camForward/camRight.
    Vector3 forward = yaw * Vector3(0.0f, 0.0f, -1.0f);
    Vector3 right = yaw * Vector3(1.0f, 0.0f, 0.0f);

    Log::print(("forward: " + forward.toString()).c_str());
    Log::print(("right: " + right.toString()).c_str());
}
