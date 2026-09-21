#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 target = obj.getPosition() + Vector3(0.0f, 1.5f, 0.0f);
    Vector3 eye = target + Vector3(0.0f, cameraHeight, cameraDistance);

    Matrix4 view = Matrix4::lookAtMatrix(eye, target, Vector3::UNIT_Y);

    Log::print(("view det: " + std::to_string(view.determinant())).c_str());
}
