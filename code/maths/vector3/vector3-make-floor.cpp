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

    // Grow the stored min corner to include the current position.
    boundsMin.makeFloor(obj.getPosition());

    // Keep the object inside a 10-unit cube ceiling.
    Vector3 pos = obj.getPosition();
    pos.makeFloor(Vector3(10.0f, 10.0f, 10.0f));
    obj.setPosition(pos);
}
