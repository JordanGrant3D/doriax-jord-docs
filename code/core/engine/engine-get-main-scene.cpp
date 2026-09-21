#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (auditMain) {
        Scene* mainScene = Engine::getMainScene();
        Log::print("main scene: %s", mainScene != nullptr ? "set" : "none");
    }
}
