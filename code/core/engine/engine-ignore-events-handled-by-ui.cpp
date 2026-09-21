#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setIgnoreEventsHandledByUI(ignoreUI);
    bool ignored = Engine::isIgnoreEventsHandledByUI();
    Log::print("ignoring UI handled events: %d", ignored ? 1 : 0);
}
