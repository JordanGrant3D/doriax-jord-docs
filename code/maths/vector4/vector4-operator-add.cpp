#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Vector add: layer a warm wash over the base tint.
    Vector4 graded = baseTint + Vector4(0.1f, 0.05f, 0.0f, 0.0f);

    // Scalar add: uniform brightness lift, tuned live via brightnessLift.
    Vector4 lifted = baseTint + brightnessLift;

    // Unary plus: explicit no-op copy.
    Vector4 same = +baseTint;

    Log::print(("graded: " + graded.toString()).c_str());
    Log::print(("lifted: " + lifted.toString()).c_str());
    (void)same;
}
