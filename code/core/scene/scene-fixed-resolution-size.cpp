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
    scene->setFixedResolutionSize(static_cast<unsigned int>(fixedWidth), static_cast<unsigned int>(fixedHeight));
    scene->setFixedResolutionEnabled(true);
    Log::print("fixed resolution size applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (!scene->isFixedResolutionEnabled()) {
        scene->setFixedResolutionSize(320, 180);
        scene->setFixedResolutionEnabled(true);
    }
    Log::print("fixed resolution size ensured");
}
