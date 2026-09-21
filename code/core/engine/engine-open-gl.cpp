#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (logGraphics) {
        logGraphics = false;
        bool openGL = Engine::isOpenGL();
        Log::print("opengl backend: %d", openGL ? 1 : 0);
    }
}
