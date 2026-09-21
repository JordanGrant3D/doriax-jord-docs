#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (watchQueue) {
        size_t queued = Engine::getQueuedResourceCount();
        Log::print("queued resources: %u", static_cast<unsigned int>(queued));
    }
}
