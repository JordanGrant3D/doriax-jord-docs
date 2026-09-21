#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (showPlatform) {
        showPlatform = false;
        Platform platform = Engine::getPlatform();
        Log::print("platform: %d", static_cast<int>(platform));
    }
}
