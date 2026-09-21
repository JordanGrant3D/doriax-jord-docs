#include "testerScript.h"
#include "Log.h"
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    std::vector<Gamepad> pads = Input::getGamepads();
    Log::print("gamepads found at startup");
    for (size_t i = 0; i < pads.size(); i++) {
        Log::print("pad id=%d present", pads[i].id);
    }
}

void testerScript::onUpdate() {
    std::vector<Gamepad> pads = Input::getGamepads();
    for (size_t i = 0; i < pads.size(); i++) {
        if (pads[i].id == gamepadId) {
            Log::print("tracked pad still connected");
        }
    }
}
