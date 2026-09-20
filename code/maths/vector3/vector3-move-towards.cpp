#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 next = obj.getPosition().moveTowards(waypoint, moveSpeed * Engine::getDeltatime());
    obj.setPosition(next);
}
