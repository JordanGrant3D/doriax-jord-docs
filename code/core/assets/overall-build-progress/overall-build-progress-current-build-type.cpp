#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // "Now loading" icon: inspect an aggregate snapshot directly, no real build.
    OverallBuildProgress overall;
    overall.currentBuildName = "Hero_Run";
    overall.hasActiveBuilds = true;
    switch (currentKind) {
        case 0: overall.currentBuildType = ResourceType::Shader; break;
        case 1: overall.currentBuildType = ResourceType::Texture; break;
        case 3: overall.currentBuildType = ResourceType::Sound; break;
        default: overall.currentBuildType = ResourceType::Model; break;
    }

    Log::print("now loading [%s]: %s",
        ResourceProgress::getResourceTypeName(overall.currentBuildType).c_str(),
        overall.currentBuildName.c_str());
}
