#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    std::string name = Input::getGamepadName(gamepadId);
    if (!name.empty()) {
        Log::print("gamepad connected");
    } else {
        Log::print("no gamepad connected");
    }
}

void testerScript::onUpdate() {
    if (Input::isGamepadConnected(gamepadId)) {
        std::string name = Input::getGamepadName(gamepadId);
        if (!name.empty()) {
            Log::print("playing with gamepad");
        }
    }
}
