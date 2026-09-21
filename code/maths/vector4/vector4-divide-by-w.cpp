#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector4 ndc = clipPosition;

    // (2, 3, 4, 2) -> (1, 1.5, 2, 2): the xyz/w perspective divide.
    if (ndc.w != 0.0f) {
        ndc.divideByW();
        Log::print(("ndc: " + ndc.toString()).c_str());
    } else {
        Log::print("clip w is zero, cannot divide");
    }
}
