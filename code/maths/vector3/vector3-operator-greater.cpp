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

    // Cap jump height: if every component is above the ceiling point, drop back.
    if (pos > ceiling) {
        pos = ceiling;
        obj.setPosition(pos);
    }
}
