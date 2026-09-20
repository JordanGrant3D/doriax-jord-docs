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

    // delta becomes the direction; returned value is the distance.
    Vector3 delta = waypoint - pos;
    float dist = delta.normalizeL();

    if (dist > 0.2f) {
        obj.setPosition(pos + delta * (moveSpeed * Engine::getDeltatime()));
    }
}
