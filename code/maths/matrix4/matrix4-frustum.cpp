#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Skewed frustum for an angled portal view; tune skew live.
    Matrix4 proj = Matrix4::frustumMatrix(-1.0f + skew, 1.0f + skew, -1.0f, 1.0f, nearPlane, farPlane);

    Log::print(("frustum det: " + std::to_string(proj.determinant())).c_str());
}
