#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // A 0/0 easing bug would silently poison the whole blend without this guard.
    if (blendWeights.isNaN()) {
        Log::print("blend weights went NaN, resetting");
        blendWeights = Vector4::UNIT_X;
        return;
    }

    Log::print(("blend weights: " + blendWeights.toString()).c_str());
}
