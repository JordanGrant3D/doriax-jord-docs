#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (applySize) {
        applySize = false;
        Engine::setCanvasSize(canvasW, canvasH);
        Log::print("canvas size requested: %dx%d", canvasW, canvasH);
    }
}
