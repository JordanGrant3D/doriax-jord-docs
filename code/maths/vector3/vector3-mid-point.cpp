#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 pos = obj.getPosition();



    // Calculate direction vector from current position to waypoint
    Vector3 direction = waypoint - pos;

    // Move smoothly towards the waypoint based on delta time
    pos = pos + direction * (moveSpeed * Engine::getDeltatime());

    // Keep the hover offset one unit above
    pos.y += 1.0f;
    obj.setPosition(pos);
}