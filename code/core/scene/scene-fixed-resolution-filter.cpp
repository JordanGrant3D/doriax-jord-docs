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
    scene->setFixedResolutionFilter(useLinearFilter ? TextureFilter::LINEAR : TextureFilter::NEAREST);
    Log::print("fixed resolution filter applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (scene->getFixedResolutionFilter() == TextureFilter::NEAREST) {
        Log::print("fixed resolution filter is nearest");
    } else {
        Log::print("fixed resolution filter is linear");
    }
}
