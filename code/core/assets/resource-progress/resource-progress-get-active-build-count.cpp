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
    int count = ResourceProgress::getActiveBuildCount();
    if (count == lastCount) {
        return;
    }
    lastCount = count;

    Log::print("%s: %d", countLabel.c_str(), count);
}
