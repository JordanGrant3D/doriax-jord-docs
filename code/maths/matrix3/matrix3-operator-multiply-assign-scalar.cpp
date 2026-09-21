#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 crouch = Matrix3::scaleMatrix(Vector3(1.0f, 0.8f, 1.0f));

    // Ease the crouch in place from the properties tab.
    crouch *= squash;

    Log::print(("crouch det: " + std::to_string(crouch.determinant())).c_str());
}
