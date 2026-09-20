#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();
    if (firstMouse) {
        lastMousePos = mousePos;
        firstMouse = false;
    }

    // Core CharacterController pattern: per-frame look delta.
    Vector2 delta = mousePos - lastMousePos;
    Vector2 scaled = delta * mouseSensitivity;

    // Unary minus: inverted look option.
    Vector2 inverted = -scaled;

    Log::print(("delta: " + delta.toString()).c_str());
    (void)inverted;
    lastMousePos = mousePos;
}
