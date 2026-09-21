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
}

void testerScript::onUpdate() {
    // Ease toward the dock, then confirm exact arrival.
    panel.setX(panel.getX() + (dockedLayout.getX() - panel.getX()) * 0.1f);

    if (panel == dockedLayout) {
        Log::print("panel docked exactly");
    }
}
