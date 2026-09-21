#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setCallTouchInMouseEvent(mirrorToTouch);
    bool enabled = Engine::isCallTouchInMouseEvent();
    Log::print("mouse fires touch events: %d", enabled ? 1 : 0);
}
