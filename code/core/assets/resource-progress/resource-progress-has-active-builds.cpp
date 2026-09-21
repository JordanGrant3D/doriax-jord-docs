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
    bool busy = ResourceProgress::hasActiveBuilds();
    if (busy == wasBusy) {
        return;
    }
    wasBusy = busy;

    if (showOverlay && busy) {
        Log::print("loading screen on");
    } else {
        Log::print("loading screen off");
    }
}
