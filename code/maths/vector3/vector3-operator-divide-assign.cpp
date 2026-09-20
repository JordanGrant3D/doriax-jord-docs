#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Scale the divisor with delta time so the slowing effect is frame-rate independent
    float dampingFactor = 1.0f + (2.0f * Engine::getDeltatime());
    velocity /= dampingFactor;

    obj.setPosition(obj.getPosition() + velocity * Engine::getDeltatime());
}