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

    Vector3 delta = waypoint - pos;
    float dist = delta.length();

    // normalized() keeps delta intact so dist stays valid for the arrival test.
    if (dist > 0.1f) {
        Vector3 dir = delta.normalized();
        obj.setPosition(pos + dir * (moveSpeed * Engine::getDeltatime()));
    }
}
