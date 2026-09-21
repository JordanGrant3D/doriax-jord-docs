#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (applyThreads) {
        applyThreads = false;
        Engine::setMaxResourceLoadingThreads(static_cast<size_t>(workerThreads));
        Log::print("resource threads: %d", workerThreads);
    }
}
