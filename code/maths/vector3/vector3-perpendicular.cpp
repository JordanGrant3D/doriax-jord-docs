#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 forward(0, 0, -1);
    Vector3 side = forward.perpendicular();

    Vector3 pos = obj.getPosition();
    if (Input::isKeyPressed(D_KEY_Q)) pos = pos + side * (dodgeSpeed * Engine::getDeltatime());
    if (Input::isKeyPressed(D_KEY_E)) pos = pos - side * (dodgeSpeed * Engine::getDeltatime());
    obj.setPosition(pos);
}
