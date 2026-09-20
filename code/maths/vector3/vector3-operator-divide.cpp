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

    // Move closer to the center (0, 0, 0) by dividing the position vector over time.
    // The divisor grows with speed and delta time, pulling it closer and closer.
    float divisor = 1.0f + (moveSpeed * Engine::getDeltatime());

    // Vector division by a float scalar
    obj.setPosition(pos / divisor);
}