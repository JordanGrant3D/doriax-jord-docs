#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Vector overload: spawn straight from the tuned position.
    Matrix4 a = Matrix4::translateMatrix(spawn);

    // Component overload: same matrix, explicit floats.
    Matrix4 b = Matrix4::translateMatrix(10.0f, 0.0f, 6.0f);

    Log::print(("spawn matrices equal: " + std::to_string(a == b)).c_str());
}
