#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setAllowEventsOutCanvas(trackOutside);
    bool allowed = Engine::isAllowEventsOutCanvas();
    Log::print("events outside canvas: %d", allowed ? 1 : 0);
}
