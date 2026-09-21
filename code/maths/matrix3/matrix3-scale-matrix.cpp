#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Uniform crouch scale plus a per-axis bulk-up; combined on the up vector.
    Matrix3 pose = Matrix3::scaleMatrix(crouch) * Matrix3::scaleMatrix(bulk);
    Vector3 up = pose * Vector3::UNIT_Y;

    Log::print(("scaled up: " + up.toString()).c_str());
    (void)obj;
}
