#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (blendWeights < weightCap) {
        Log::print("all blend weights under cap");
    } else {
        Log::print("a blend weight hit its cap");
    }
}
