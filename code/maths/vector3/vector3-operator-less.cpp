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

    // Clamp down: if pos is strictly less than min on every axis, pull it back.
    // (For a full AABB clamp see makeFloor / makeCeil.)
    if (pos < minBounds) {
        obj.setPosition(minBounds);
    } else if (maxBounds < pos) {
        obj.setPosition(maxBounds);
    }
}
