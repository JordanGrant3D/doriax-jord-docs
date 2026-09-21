#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // "Now loading" label: inspect an aggregate snapshot directly, no real build.
    OverallBuildProgress overall;
    overall.totalProgress = 0.4f;
    overall.totalBuilds = 2;
    overall.currentBuildName = "Hero_Diffuse";
    overall.currentBuildType = ResourceType::Texture;
    overall.hasActiveBuilds = true;

    if (!overall.currentBuildName.empty()) {
        Log::print("%s: %s", labelPrefix.c_str(), overall.currentBuildName.c_str());
    }
}
