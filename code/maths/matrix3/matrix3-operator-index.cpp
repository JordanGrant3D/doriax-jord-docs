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
}

void testerScript::onUpdate() {
    // Read the up basis column (const overload).
    const Matrix3& pose = basis;
    float upY = pose[1][1];

    // Raise the whole Y column through the writable overload.
    basis[1][0] += 0.0f;
    basis[1][1] = lift;
    basis[1][2] += 0.0f;

    Log::print(("up Y was: " + std::to_string(upY)).c_str());
}
