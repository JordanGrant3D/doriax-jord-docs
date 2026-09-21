#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (useCrosshair) {
        Engine::setMouseCursor(CursorType::CROSSHAIR);
    } else {
        Engine::setMouseCursor(CursorType::ARROW);
    }
    CursorType cursor = Engine::getMouseCursor();
    Log::print("mouse cursor: %d", static_cast<int>(cursor));
}
