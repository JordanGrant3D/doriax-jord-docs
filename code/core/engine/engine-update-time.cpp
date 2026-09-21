#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Engine::setUpdateTime(fixedStep);
    float step = Engine::getUpdateTime();
    Log::print("fixed update step: %f", step);
}
