#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Widen the tooltip while hovering it; shrink when the cursor leaves.
    Vector2 mousePos = Input::getMousePosition();

    if (panel.contains(mousePos)) {
        panel.setWidth(320.0f);
    } else {
        panel.setWidth(200.0f);
    }

    Log::print(("panel width: " + std::to_string(panel.getWidth())).c_str());
}
