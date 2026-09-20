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
        // Vector copy-assign, mirroring CharacterController's firstMouse init.
        lastMousePos = mousePos;
        firstMouse = false;
    }

    // Scalar-assign clears both axes at once when the right mouse button is released.
    Vector2 scratch;
    scratch = 0.0f;

    Log::print(("lastMouse: " + lastMousePos.toString()).c_str());
    (void)scratch;
}
