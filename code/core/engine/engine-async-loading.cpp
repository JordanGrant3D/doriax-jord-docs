#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setAsyncLoading(backgroundLoad);
    bool loading = Engine::isAsyncLoading();
    Log::print("async loading: %d", loading ? 1 : 0);
}
