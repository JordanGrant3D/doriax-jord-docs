#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Squashed yaw pose, as if a crouch got baked into the facing matrix.
    Matrix3 pose = Matrix3::rotateYMatrix(yawDegrees) * Matrix3::scaleMatrix(Vector3(1.0f, 0.8f, 1.0f));

    Matrix3 rotation;
    Vector3 scale;
    Vector3 shear;
    pose.decomposeQDU(rotation, scale, shear);

    Log::print(("clean rotation det: " + std::to_string(rotation.determinant())).c_str());
    Log::print(("scale part: " + scale.toString()).c_str());
}
