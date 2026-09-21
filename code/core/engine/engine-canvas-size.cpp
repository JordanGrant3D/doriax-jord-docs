#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    int width = Engine::getCanvasWidth();
    int height = Engine::getCanvasHeight();
    float centerX = static_cast<float>(width) * 0.5f;
    float centerY = static_cast<float>(height) * 0.5f;
    Log::print("canvas %dx%d center %f,%f margin %f", width, height, centerX, centerY, uiMargin);
}
