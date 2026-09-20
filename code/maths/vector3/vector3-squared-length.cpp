#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 inputDir(0, 0, 0);
    if (Input::isKeyPressed(D_KEY_W)) inputDir = inputDir + Vector3(0, 0, -1);
    if (Input::isKeyPressed(D_KEY_D)) inputDir = inputDir + Vector3(1, 0, 0);

    // Fast zero-input test without sqrt, then normalize once.
    if (inputDir.squaredLength() > 0.001f) {
        inputDir.normalize();
        obj.setPosition(obj.getPosition() + inputDir * (moveSpeed * Engine::getDeltatime()));
    }
}
