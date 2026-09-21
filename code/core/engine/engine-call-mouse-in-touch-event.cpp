#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setCallMouseInTouchEvent(forwardTouch);
    bool enabled = Engine::isCallMouseInTouchEvent();
    Log::print("touch fires mouse events: %d", enabled ? 1 : 0);
}
