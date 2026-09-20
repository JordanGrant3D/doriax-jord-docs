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

    // Never let a NaN/inf position propagate: snap back to spawn.
    // To test in Properties set position to inf, it should snap to 1
    if (!pos.isValid()) {
        obj.setPosition(spawnPoint);
    }
}
