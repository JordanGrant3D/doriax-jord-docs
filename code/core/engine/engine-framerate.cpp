#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    float fps = Engine::getFramerate();
    if (fps < lowFpsWarn) {
        Log::print("low framerate: %f", fps);
    } else {
        Log::print("framerate: %f", fps);
    }
}
