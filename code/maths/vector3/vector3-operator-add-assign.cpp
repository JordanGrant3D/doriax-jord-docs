#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 camForward(0, 0, -1);
    Vector3 camRight(1, 0, 0);
    Vector3 inputDir(0, 0, 0);

    if (Input::isKeyPressed(D_KEY_W)) inputDir += camForward;
    if (Input::isKeyPressed(D_KEY_S)) inputDir -= camForward;
    if (Input::isKeyPressed(D_KEY_D)) inputDir += camRight;
    if (Input::isKeyPressed(D_KEY_A)) inputDir -= camRight;

    if (inputDir.squaredLength() > 0.001f) {
        inputDir.normalize();
        obj.setPosition(obj.getPosition() + inputDir * (moveSpeed * Engine::getDeltatime()));
    }
}
