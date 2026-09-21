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
    Log::print("character controller ready, click to attack");
}

void testerScript::onUpdate() {
    if (Input::isMousePressed(attackButton)) {
        Log::print("attacking within range");
    }
    if (Input::isMousePressed(D_MOUSE_BUTTON_RIGHT)) {
        Log::print("blocking");
    }
}
