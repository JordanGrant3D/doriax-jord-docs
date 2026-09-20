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
    Vector3 pos = obj.getPosition();

    // Hold S to back away from the forward axis.
    if (Input::isKeyPressed(D_KEY_S)) {
        pos -= camForward * (moveSpeed * Engine::getDeltatime());
        // Equivalent longhand: pos = pos - camForward * (speed * dt).
        obj.setPosition(pos);
    }
}
