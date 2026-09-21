#include "testerScript.h"
#include "Log.h"
#include <cstddef>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    size_t index = Input::findGamepadIndex(gamepadId);
    if (index != SIZE_MAX) {
        Log::print("tracked gamepad found at startup");
    } else {
        Log::print("tracked gamepad not connected");
    }
}

void testerScript::onUpdate() {
    size_t index = Input::findGamepadIndex(gamepadId);
    if (index != SIZE_MAX) {
        Log::print("tracked gamepad present");
    }
}
