#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Uniform per-axis DPI compensation; edit dpiScale live in the properties tab.
    Vector2 scaled = mousePos * dpiScale;

    Log::print(("scaled mouse: " + scaled.toString()).c_str());
}
