#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (probeTarget) {
        probeTarget = false;
        Framebuffer* target = Engine::getFramebuffer();
        Engine::setFramebuffer(target);
        Log::print("framebuffer probe: %s", target == nullptr ? "window" : "offscreen");
    }
}
