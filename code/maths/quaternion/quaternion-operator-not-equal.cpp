#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    lastRotation = obj.getRotation();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Same idea as CharacterController's anim-state switch: only react on change.
    if (logChanges && obj.getRotation() != lastRotation) {
        Log::print("rotation changed, refreshing facing");
        lastRotation = obj.getRotation();
    }
}
