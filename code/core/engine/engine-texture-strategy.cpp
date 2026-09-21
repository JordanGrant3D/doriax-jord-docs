#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (applyResize) {
        applyResize = false;
        Engine::setTextureStrategy(TextureStrategy::RESIZE);
    }
    TextureStrategy strategy = Engine::getTextureStrategy();
    Log::print("texture strategy: %d", static_cast<int>(strategy));
}
