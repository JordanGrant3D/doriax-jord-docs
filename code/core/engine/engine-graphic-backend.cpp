#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (showBackend) {
        showBackend = false;
        GraphicBackend backend = Engine::getGraphicBackend();
        Log::print("graphics backend: %d", static_cast<int>(backend));
    }
}
