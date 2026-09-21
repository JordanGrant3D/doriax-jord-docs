#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 yaw3 = Matrix3::rotateYMatrix(yawDegrees);
    Matrix4 yaw4 = Matrix4::rotateYMatrix(yawDegrees);

    // Both paths must agree on the same yaw.
    Quaternion from3, from4;
    from3.fromRotationMatrix(yaw3);
    from4.fromRotationMatrix(yaw4);

    Log::print(("agree: " + std::to_string(from3.equals(from4))).c_str());
}
