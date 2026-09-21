#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Same mouse reading CharacterController uses for look input.
    Vector2 mousePos = Input::getMousePosition();

    if (startButton.contains(mousePos)) {
        Log::print("hovering the start button");
    }
}
