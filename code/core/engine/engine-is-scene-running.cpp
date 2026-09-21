#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (checkHud) {
        bool running = Engine::isSceneRunning(&hudLayer);
        Log::print("hud running: %d", running ? 1 : 0);
    }
}
