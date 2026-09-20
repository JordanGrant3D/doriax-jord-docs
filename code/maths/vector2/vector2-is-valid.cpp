#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Never feed NaN/inf into camera math: hold yaw when the reading is corrupt.
    if (!mousePos.isValid()) {
        Log::print("invalid mouse reading, holding yaw");
        return;
    }

    camYaw -= mousePos.x * 0.001f;
    Log::print(("camYaw: " + std::to_string(camYaw)).c_str());
}
