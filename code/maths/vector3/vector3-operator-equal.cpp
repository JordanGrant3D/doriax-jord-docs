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
    obj.setPosition(home);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Reset back home while SPACE is held, then detect arrival.
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        obj.setPosition(home);
    }

    if (obj.getPosition() == home) {
        // We are exactly home: hop up one unit.
        obj.setPosition(home + Vector3(0.0f, 1.0f, 0.0f));
    }
}
