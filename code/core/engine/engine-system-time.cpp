#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    double now = Engine::getSystemTime();
    if (now - lastLogTime > logInterval) {
        lastLogTime = now;
        Log::print("system time: %f", now);
    }
}
