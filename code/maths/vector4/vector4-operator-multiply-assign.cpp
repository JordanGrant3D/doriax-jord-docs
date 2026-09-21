#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector4 graded = tint;

    // Shape the tint in place: per-channel mask first, then global intensity.
    graded *= channelMask;
    graded *= intensity;

    Log::print(("graded: " + graded.toString()).c_str());
}
