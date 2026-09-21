#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (centerCursor) {
        centerCursor = false;
        float x = static_cast<float>(Engine::getCanvasWidth()) * 0.5f;
        float y = static_cast<float>(Engine::getCanvasHeight()) * 0.5f;
        Engine::setMousePosition(x, y);
        Log::print("mouse centered: %f,%f", x, y);
    }
}
