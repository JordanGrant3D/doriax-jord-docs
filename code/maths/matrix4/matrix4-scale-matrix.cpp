#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Uniform crouch scale plus a per-axis bulk-up; combined on the up vector.
    Matrix4 pose = Matrix4::scaleMatrix(crouch) * Matrix4::scaleMatrix(bulk);
    Vector3 up = pose * Vector3::UNIT_Y;

    Log::print(("scaled up: " + up.toString()).c_str());
    (void)obj;
}
