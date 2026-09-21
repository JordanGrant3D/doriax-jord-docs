#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Log::print("gamepad buttons ready, press A to jump");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    if (Input::isGamepadButtonPressed(gamepadId, jumpButton)) {
        Vector3 pos = player.getPosition();
        pos.y += moveSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("gamepad jump pressed");
    }
    if (Input::isGamepadButtonPressed(gamepadId, D_GAMEPAD_BUTTON_B)) {
        Log::print("gamepad button B pressed");
    }
}
