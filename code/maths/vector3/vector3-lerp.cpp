#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Ping-pong blend between point a and point b for a patrol platform.
    blend += Engine::getDeltatime() * 0.25f;
    if (blend > 1.0f) blend = 0.0f;

    Vector3 pos = pointA.lerp(pointB, blend);
    obj.setPosition(pos);
}
