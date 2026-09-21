#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 telegraph = Matrix4::scaleMatrix(Vector3(3.0f, 1.0f, 3.0f));

    // Ease the telegraph in place from the properties tab.
    telegraph *= fade;

    Log::print(("telegraph det: " + std::to_string(telegraph.determinant())).c_str());
}
