#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (applyLetterbox) {
        applyLetterbox = false;
        Engine::setScalingMode(Scaling::LETTERBOX);
    }
    Scaling mode = Engine::getScalingMode();
    Log::print("scaling mode: %d", static_cast<int>(mode));
}
