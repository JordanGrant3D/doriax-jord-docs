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
    scene->setFixedResolutionHeight(static_cast<unsigned int>(fixedHeight));
    Log::print("fixed resolution height applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    unsigned int h = scene->getFixedResolutionHeight();
    if (h < 90) {
        scene->setFixedResolutionHeight(90);
    }
    Log::print("fixed resolution height checked");
}
