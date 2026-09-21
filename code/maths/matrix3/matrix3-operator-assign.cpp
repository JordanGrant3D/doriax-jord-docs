#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    savedFacing = Matrix3::rotateYMatrix(yawDegrees);
}

void testerScript::onUpdate() {
    // Snapshot the tuned yaw, then add lean on the copy only.
    workFacing = savedFacing;
    workFacing *= Matrix3::rotateZMatrix(10.0f);

    Log::print(("work det: " + std::to_string(workFacing.determinant())).c_str());
}
