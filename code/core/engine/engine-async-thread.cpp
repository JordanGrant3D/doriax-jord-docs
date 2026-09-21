#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    bool worker = Engine::isAsyncThread();
    if (flushUploads) {
        flushUploads = false;
        Engine::commitThreadQueue();
    }
    Log::print("async thread: %d", worker ? 1 : 0);
}
