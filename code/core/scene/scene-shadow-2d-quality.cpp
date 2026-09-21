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
    scene->setShadow2DQuality(static_cast<ShadowQuality>(shadow2DQuality));
    Log::print("2d shadow quality applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (scene->getShadow2DQuality() == ShadowQuality::NONE) {
        Log::print("2d shadows unfiltered");
    } else {
        Log::print("2d shadows filtered");
    }
}
