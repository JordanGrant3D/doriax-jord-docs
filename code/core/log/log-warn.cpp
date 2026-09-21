#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Corrupt reading: warn, hold yaw, and keep running.
    if (!mousePos.isValid()) {
        Log::warn("invalid mouse reading, holding yaw");
        return;
    }

    camYaw -= mousePos.x * 0.001f;
}
