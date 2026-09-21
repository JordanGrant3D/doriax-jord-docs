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

    // Cheap un-rotation for orthonormal poses: transpose instead of inverse.
    Vector3 worldPush(1.0f, 0.0f, 0.0f);
    Vector3 localPush = yaw.transpose() * worldPush;

    Log::print(("local push: " + localPush.toString()).c_str());
}
