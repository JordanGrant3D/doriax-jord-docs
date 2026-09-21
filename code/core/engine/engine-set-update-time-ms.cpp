#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (applyStep) {
        applyStep = false;
        Engine::setUpdateTimeMS(static_cast<unsigned int>(stepMs));
        Log::print("fixed step ms: %d current %f", stepMs, Engine::getUpdateTime());
    }
}
