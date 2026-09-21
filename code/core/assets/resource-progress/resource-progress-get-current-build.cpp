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
    ResourceBuildInfo current = ResourceProgress::getCurrentBuild();
    if (current.name == lastSeen) {
        return;
    }
    lastSeen = current.name;

    Log::print("%s: %s (%d%%)", nowLoading.c_str(), current.name.c_str(),
        (int)(current.progress * 100.0f));
}
