#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Expand the tooltip while hovering it; collapse when the cursor leaves.
    Vector2 mousePos = Input::getMousePosition();

    if (panel.contains(mousePos)) {
        panel.setHeight(120.0f);
    } else {
        panel.setHeight(60.0f);
    }

    Log::print(("panel height: " + std::to_string(panel.getHeight())).c_str());
}
