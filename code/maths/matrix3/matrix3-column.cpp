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

    // Basis columns straight out of the pose: right, up, forward.
    Vector3 right = yaw.column(0);
    Vector3 up = yaw.column(1);

    Log::print(("right: " + right.toString()).c_str());
    Log::print(("up: " + up.toString()).c_str());
}
