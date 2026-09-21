#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (blend < 0.0f) blend = 0.0f;
    if (blend > 1.0f) blend = 1.0f;

    // Cheap pose blend between two spawn facings, then halve to the midpoint.
    Matrix4 a = Matrix4::translateMatrix(0.0f, 0.0f, 0.0f);
    Matrix4 b = Matrix4::translateMatrix(10.0f, 0.0f, 0.0f);
    Matrix4 mid = (a + b) * 0.5f;

    Log::print(("mid det: " + std::to_string(mid.determinant())).c_str());
}
