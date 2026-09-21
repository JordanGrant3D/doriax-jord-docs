#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Per-channel normalize into the 0..1 range.
    Vector4 normalized = rawWeights / channelMax;

    // Scalar division: halve every channel at once.
    Vector4 halved = rawWeights / 2.0f;

    Log::print(("normalized: " + normalized.toString()).c_str());
    (void)halved;
}
