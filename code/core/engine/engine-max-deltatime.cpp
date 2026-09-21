#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setMaxDeltatime(maxStep);
    float cap = Engine::getMaxDeltatime();
    Log::print("deltatime clamped to %f", cap);
}
