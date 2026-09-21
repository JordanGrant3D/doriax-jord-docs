#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (watchView) {
        bool loaded = Engine::isViewLoaded();
        Log::print("view loaded: %d", loaded ? 1 : 0);
    }
}
