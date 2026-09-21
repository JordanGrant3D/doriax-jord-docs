#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 bulk = Matrix4::scaleMatrix(scale);

    // det == 8 for 2x scale: only invert when safely non-zero.
    float det = bulk.determinant();
    if (det != 0.0f) {
        Matrix4 undo = bulk.inverse();
        (void)undo;
    }

    Log::print(("volume scale: " + std::to_string(det)).c_str());
}
