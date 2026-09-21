#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (scene->canReceiveUIEvents()) {
        Log::print("scene receives ui events");
    } else {
        Log::print("scene ignores ui events");
    }
    (void)hudTag;
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (!scene->canReceiveUIEvents()) {
        scene->enableUIEvents();
    }
    Log::print("ui event routing ensured");
}
