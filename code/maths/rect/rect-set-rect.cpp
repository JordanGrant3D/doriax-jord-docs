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
    // Component overload: full geometry in one atomic call.
    panel.setRect(100.0f, 100.0f, 200.0f, 60.0f);
}

void testerScript::onUpdate() {
    // Rect overload: snap to the live-tuned preset.
    panel.setRect(preset);

    Log::print(("panel: " + panel.toString()).c_str());
}
