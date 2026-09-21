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
        bool pending = Engine::hasScenesToExecuteOnce();
        Log::print("one-shot scenes pending: %d", pending ? 1 : 0);
    }
}
