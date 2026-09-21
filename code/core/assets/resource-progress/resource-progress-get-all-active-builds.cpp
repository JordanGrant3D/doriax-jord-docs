#include "testerScript.h"
#include "Log.h"

#include <algorithm>
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Read-only poll: safe every frame, triggers no builds.
    std::vector<ResourceBuildInfo> builds = ResourceProgress::getAllActiveBuilds();
    if ((int)builds.size() == lastCount) {
        return;
    }
    lastCount = (int)builds.size();

    int rows = std::min((int)builds.size(), std::max(maxRows, 0));
    for (int i = 0; i < rows; ++i) {
        Log::print("warmup row: %s %d%%", builds[(size_t)i].name.c_str(),
            (int)(builds[(size_t)i].progress * 100.0f));
    }
}
