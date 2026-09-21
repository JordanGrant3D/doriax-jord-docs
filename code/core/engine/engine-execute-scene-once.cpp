#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (renderPreview) {
        renderPreview = false;
        Engine::executeSceneOnce(&previewScene);
        Log::print("preview queued: %d", Engine::hasScenesToExecuteOnce() ? 1 : 0);
    }
}
