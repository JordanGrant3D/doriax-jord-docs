#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (blend < 0.0f) blend = 0.0f;
    if (blend > 1.0f) blend = 1.0f;

    // Cheap pose blend: add, then halve back to the midpoint.
    Matrix3 a = Matrix3::rotateYMatrix(0.0f);
    Matrix3 b = Matrix3::rotateYMatrix(90.0f);
    Matrix3 mid = (a + b) * 0.5f;

    Log::print(("mid det: " + std::to_string(mid.determinant())).c_str());
}
