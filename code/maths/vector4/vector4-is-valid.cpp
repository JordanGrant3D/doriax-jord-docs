#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Never feed inf/NaN into rendering or animation: snap back to white.
    if (!tint.isValid()) {
        Log::print("tint invalid, resetting to white");
        tint = Vector4::UNIT_SCALE;
        return;
    }

    Log::print(("tint: " + tint.toString()).c_str());
}
