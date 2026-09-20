#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 pos = obj.getPosition();

    // Direction-to-target delta.
    Vector3 delta = target - pos;
    if (delta.length() > 0.05f) {
        delta.normalize();
        obj.setPosition(pos + delta * (chaseSpeed * Engine::getDeltatime()));
    }
}
