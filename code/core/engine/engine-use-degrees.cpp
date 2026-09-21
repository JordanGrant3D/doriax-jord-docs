#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setUseDegrees(useDegrees);
    bool degrees = Engine::isUseDegrees();
    Log::print("angles in degrees: %d", degrees ? 1 : 0);
}
