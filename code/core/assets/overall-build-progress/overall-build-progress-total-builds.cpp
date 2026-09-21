#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Resource counter: inspect an aggregate snapshot directly, no real build.
    OverallBuildProgress overall;
    overall.totalBuilds = expectedAssets;
    overall.hasActiveBuilds = expectedAssets > 0;

    Log::print("warming %d assets", overall.totalBuilds);
}
