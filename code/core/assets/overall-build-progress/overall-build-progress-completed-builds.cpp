#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Done counter: inspect an aggregate snapshot directly, no real build.
    // Note: the live tracker leaves completedBuilds at 0, so loading
    // screens treat totalBuilds reaching 0 as "all done".
    OverallBuildProgress overall;
    overall.totalBuilds = requiredBuilds;
    overall.completedBuilds = 1;
    overall.hasActiveBuilds = overall.totalBuilds > overall.completedBuilds;

    Log::print("builds done: %d/%d", overall.completedBuilds, overall.totalBuilds);
}
