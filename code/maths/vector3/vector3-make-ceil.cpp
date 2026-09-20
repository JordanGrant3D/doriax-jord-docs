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

    // 1. Enforce minimum floor limit (y >= 0)
    pos.makeCeil(Vector3(-100.0f, 0.0f, -100.0f));

    // 2. Enforce maximum bounds limit (restrict position so it doesn't exceed boundsMax)
    pos.makeFloor(boundsMax);

    // Apply the constrained position back to the object
    obj.setPosition(pos);
}