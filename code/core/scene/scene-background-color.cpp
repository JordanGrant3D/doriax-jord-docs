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
    scene->setBackgroundColor(clearRed, clearGreen, clearBlue, 1.0f);
    Log::print("background color applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Vector4 bg = scene->getBackgroundColor();
    if (bg.x < 0.5f) {
        scene->setBackgroundColor(bg.x + Engine::getDeltatime() * 0.1f, bg.y, bg.z, bg.w);
    }
    Log::print("background color animated");
}
