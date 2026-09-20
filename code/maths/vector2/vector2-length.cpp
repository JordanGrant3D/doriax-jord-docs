#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    // Same deadzone pattern CharacterController applies to gamepad axes.
    float deflection = stick.length();
    if (deflection < moveDeadzone) {
        Log::print("stick inside deadzone");
        return;
    }

    Log::print(("stick deflection: " + std::to_string(deflection)).c_str());
}
