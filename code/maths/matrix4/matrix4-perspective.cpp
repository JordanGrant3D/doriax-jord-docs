#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 proj = Matrix4::perspectiveMatrix(yfov, aspect, 0.1f, 100.0f);

    // Project the spawn point into clip space (w survives: no divide here).
    Vector4 clip = proj * Vector4(10.0f, 0.0f, 6.0f, 1.0f);

    Log::print(("clip: " + clip.toString()).c_str());
}
