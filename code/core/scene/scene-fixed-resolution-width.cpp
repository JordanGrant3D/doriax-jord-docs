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
    scene->setFixedResolutionWidth(static_cast<unsigned int>(fixedWidth));
    Log::print("fixed resolution width applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    unsigned int w = scene->getFixedResolutionWidth();
    if (w < 160) {
        scene->setFixedResolutionWidth(160);
    }
    Log::print("fixed resolution width checked");
}
