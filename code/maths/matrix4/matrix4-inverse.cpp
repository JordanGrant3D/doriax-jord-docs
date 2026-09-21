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

    // Camera world pose above the character, then its view matrix.
    Matrix4 camWorld = Matrix4::translateMatrix(obj.getPosition() + Vector3(0.0f, cameraHeight, 8.0f));
    Matrix4 view = camWorld.inverse();

    Log::print(("view det: " + std::to_string(view.determinant())).c_str());
}
