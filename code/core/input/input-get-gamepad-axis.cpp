#include "testerScript.h"
#include "Log.h"
#include <cmath>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Log::print("left stick movement ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    float x = Input::getGamepadAxis(gamepadId, D_GAMEPAD_AXIS_LEFT_X);
    float y = Input::getGamepadAxis(gamepadId, D_GAMEPAD_AXIS_LEFT_Y);
    if (fabsf(x) > deadzone || fabsf(y) > deadzone) {
        Vector3 pos = player.getPosition();
        pos.x += x * moveSpeed * Engine::getDeltatime();
        pos.z += y * moveSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("left stick x=%.2f y=%.2f", x, y);
    }
}
