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
    // A zeroed rect means layout never ran: fall back to defaults.
    if (panel.isZero()) {
        Log::print("panel uninitialized, applying defaults");
        panel.setRect(100.0f, 100.0f, 200.0f, 60.0f);
    }
}
