#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector4 fitted = rawWeights;

    // Pull every channel into the 0..1 range, then halve uniformly.
    fitted /= channelMax;
    fitted /= 2.0f;

    Log::print(("fitted: " + fitted.toString()).c_str());
}
