#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // W moves forward, S moves along the negated direction (backwards).
    Vector3 dir(0, 0, 0);
    if (Input::isKeyPressed(D_KEY_W)) dir = dir + forward;
    if (Input::isKeyPressed(D_KEY_S)) dir = dir + (-forward);

    obj.setPosition(obj.getPosition() + dir * (speed * Engine::getDeltatime()));
}
