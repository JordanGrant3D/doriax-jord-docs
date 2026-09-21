#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Per-channel mask: knock out or boost individual RGBA channels.
    Vector4 masked = baseTint * channelMask;

    // Global intensity, both member and free-function order.
    Vector4 dimmed = baseTint * intensity;
    Vector4 dimmed2 = intensity * baseTint;

    Log::print(("masked: " + masked.toString()).c_str());
    (void)dimmed; (void)dimmed2;
}
