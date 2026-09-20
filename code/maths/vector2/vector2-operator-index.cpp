#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Read both axes by index (const overload).
    float x = stick[0];
    float y = stick[1];

    // Write through the index operator (non-const overload), e.g. clamp the
    // vertical axis of a gamepad stick reading.
    stick[1] = y * 0.5f;

    Log::print(("stick: " + stick.toString()).c_str());
    (void)x;
}
