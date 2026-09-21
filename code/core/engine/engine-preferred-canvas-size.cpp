#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    int prefWidth = Engine::getPreferredCanvasWidth();
    int prefHeight = Engine::getPreferredCanvasHeight();
    Log::print("preferred canvas %dx%d scaled %f", prefWidth, prefHeight, layoutScale);
}
