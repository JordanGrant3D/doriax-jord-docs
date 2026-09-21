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

    // Clip everything below the mirror surface out of the reflection pass.
    Vector4 waterPlane(0.0f, 1.0f, 0.0f, -clipHeight);
    Matrix4 clipped = proj.obliqueNearClip(waterPlane);

    Log::print(("clipped det: " + std::to_string(clipped.determinant())).c_str());
}
