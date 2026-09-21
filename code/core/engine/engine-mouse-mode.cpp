#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (captureLook) {
        Engine::setMouseMode(MouseMode::CAPTURED);
    } else {
        Engine::setMouseMode(MouseMode::NORMAL);
    }
    MouseMode mode = Engine::getMouseMode();
    Log::print("mouse mode: %d", static_cast<int>(mode));
}
