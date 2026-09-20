
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


    // Stop within 5 units of the waypoint.

    if (pos.distance(waypoint) > 5.0f) {
        Vector3 next = pos.moveTowards(waypoint, moveSpeed * Engine::getDeltatime());

        obj.setPosition(next);
    }
}