#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (watchUI) {
        bool consumed = Engine::isUIEventReceived();
        Log::print("ui consumed event: %d", consumed ? 1 : 0);
    }
}
