#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 pose = Matrix4::translateMatrix(10.0f, 0.0f, 6.0f) * Matrix4::rotateYMatrix(yawDegrees);

    // Strip translation: the 3x3 yaw basis alone.
    Matrix3 facing = pose.linear();
    Vector3 forward = facing * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("forward: " + forward.toString()).c_str());
}
