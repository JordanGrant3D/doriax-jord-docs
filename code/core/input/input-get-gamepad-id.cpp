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
    Log::print("gamepad enumeration ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    for (size_t i = 0; i < Input::numGamepads(); i++) {
        int id = Input::getGamepadId(i);
        if ((int)i == gamepadSlot && Input::isGamepadButtonPressed(id, D_GAMEPAD_BUTTON_A)) {
            Vector3 pos = player.getPosition();
            pos.y += moveSpeed * Engine::getDeltatime();
            player.setPosition(pos);
            Log::print("slot pad jumping with id=%d", id);
        }
    }
}
