#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 spin = Matrix4::rotateYMatrix(90.0f);

    // Scaled copy keeps spin intact for the next frame.
    Matrix4 eased = spin * blend;

    Log::print(("eased det: " + std::to_string(eased.determinant())).c_str());
}
