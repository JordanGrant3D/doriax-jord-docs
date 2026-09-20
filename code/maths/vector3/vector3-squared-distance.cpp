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

    // Cheaper than distance(): no square root.
    float r2 = arriveRadius * arriveRadius;
    if (obj.getPosition().squaredDistance(waypoint) <= r2) {
        // Arrived: lift the object as feedback.
        Vector3 pos = obj.getPosition();
        pos.y += 0.25f;
        obj.setPosition(pos);
    }
}
