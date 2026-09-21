#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 squash = Matrix3::scaleMatrix(scale);

    // det == 8 for 2x scale: volumes grow eightfold. det == 0: do not invert.
    float det = squash.determinant();

    Log::print(("volume scale: " + std::to_string(det)).c_str());
}
