#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    lastPos = obj.getPosition();
    moveCount = 0;
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 current = obj.getPosition();

    // Same pattern CharacterController uses to reset idleTime on movement.
    if (current != lastPos) {
        moveCount++;
        lastPos = current;
    }
}
