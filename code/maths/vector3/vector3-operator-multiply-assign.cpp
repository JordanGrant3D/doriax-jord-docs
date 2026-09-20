#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Frame-rate independent step: copy, scale in place, integrate.
    Vector3 step = velocity;
    step *= Engine::getDeltatime();
    obj.setPosition(obj.getPosition() + step);
}
