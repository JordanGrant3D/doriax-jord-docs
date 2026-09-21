#include "testerScript.h"
#include "Log.h"

#include <algorithm>
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Total warmup bar: inspect an aggregate snapshot directly, no real build.
    OverallBuildProgress overall;
    overall.totalProgress = 0.6f;
    overall.totalBuilds = 5;
    overall.hasActiveBuilds = true;

    int filled = (int)(overall.totalProgress * (float)std::max(barSegments, 1));
    std::string bar((size_t)filled, '#');
    bar += std::string((size_t)(std::max(barSegments, 1) - filled), '-');
    Log::print("total warmup [%s] %d%%", bar.c_str(), (int)(overall.totalProgress * 100.0f));
}
