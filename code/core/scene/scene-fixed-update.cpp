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
        scene->fixedUpdate(1.0 / 60.0);
    }
    Log::print("scene fixed update ensured");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (manualStep) {
        scene->fixedUpdate(Engine::getDeltatime());
        Log::print("scene fixed-stepped");
    } else {
        Log::print("scene fixed update left to engine");
    }
}
