#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Read-only poll: safe every frame, triggers no builds.
    OverallBuildProgress overall = ResourceProgress::getOverallProgress();
    int percent = (int)(overall.totalProgress * progressScale);
    if (percent == lastPercent) {
        return;
    }
    lastPercent = percent;

    Log::print("total warmup: %d%% (%s)", percent, overall.currentBuildName.c_str());
}
