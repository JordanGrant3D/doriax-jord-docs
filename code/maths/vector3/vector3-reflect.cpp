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

    // Bounce off the x == 5 wall by reflecting the travel vector.
    if (pos.x >= 5.0f) {
        velocity = velocity.reflect(wallNormal);
        pos.x = 5.0f;
    }

    obj.setPosition(pos + velocity * Engine::getDeltatime());
}
