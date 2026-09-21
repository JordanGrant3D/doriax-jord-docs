#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    lastPanel = panel;
}

void testerScript::onUpdate() {
    // Same idea as CharacterController's anim-state switch: only react on change.
    if (panel != lastPanel) {
        Log::print(("panel reshaped: " + panel.toString()).c_str());
        lastPanel = panel;
    }
}
