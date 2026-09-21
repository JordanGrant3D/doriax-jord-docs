#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Only sample the atlas when the UV rect is a valid 0..1 sub-region.
    if (spriteUV.isNormalized()) {
        Log::print("sprite UV valid, sampling atlas");
    } else {
        Log::print("sprite UV out of 0..1 range, clamping");
        spriteUV.fitOnRect(Rect(0.0f, 0.0f, 1.0f, 1.0f));
    }
}
