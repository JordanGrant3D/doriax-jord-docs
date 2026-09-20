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
    Vector3 up = Vector3::UNIT_Y;

    // Right axis = forward x up == (1, 0, 0) here.
    Vector3 right = forward.crossProduct(up);
    right.normalize();

    Vector3 pos = obj.getPosition();
    if (Input::isKeyPressed(D_KEY_D)) pos = pos + right * (strafeSpeed * Engine::getDeltatime());
    if (Input::isKeyPressed(D_KEY_A)) pos = pos - right * (strafeSpeed * Engine::getDeltatime());
    obj.setPosition(pos);
}
