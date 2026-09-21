#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Overlay toggle: inspect an aggregate snapshot directly, no real build.
    OverallBuildProgress overall;
    overall.totalBuilds = 2;
    overall.totalProgress = 0.35f;
    overall.hasActiveBuilds = true;

    if (showOverlay && overall.hasActiveBuilds) {
        Log::print("loading screen on (%d builds)", overall.totalBuilds);
    } else {
        Log::print("loading screen off");
    }
}
