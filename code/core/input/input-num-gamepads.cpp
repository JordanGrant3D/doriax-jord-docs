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
    lastPadCount = Input::numGamepads();
    Log::print("watching gamepad connections");
}

void testerScript::onUpdate() {
    size_t count = Input::numGamepads();
    if (count != lastPadCount) {
        lastPadCount = count;
        Log::print("gamepad count changed");
    }
    if (Input::isGamepadConnected(gamepadId)) {
        Log::print("tracked gamepad connected");
    }
}
