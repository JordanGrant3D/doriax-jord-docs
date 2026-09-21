#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Mirror floor at the tuned height; reflect the world through it.
    Plane floor(Vector3::UNIT_Y, mirrorHeight);
    Matrix4 mirror = Matrix4::reflectMatrix(floor);

    Vector4 reflected = mirror * Vector4(1.0f, 3.0f, 2.0f, 1.0f);

    Log::print(("reflected: " + reflected.toString()).c_str());
}
