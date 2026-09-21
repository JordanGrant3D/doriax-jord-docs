#include "testerScript.h"
#include "Engine.h"
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
    if (manualStep) {
        scene->update(1.0 / 60.0);
    }
    Log::print("scene update ensured");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (manualStep) {
        scene->update(Engine::getDeltatime());
        Log::print("scene stepped");
    } else {
        Log::print("scene update left to engine");
    }
}
