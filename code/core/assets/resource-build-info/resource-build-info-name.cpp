#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Loading-list row label: inspect a snapshot directly, no real build.
    ResourceBuildInfo info;
    info.type = ResourceType::Model;
    info.name = rowAsset;
    info.progress = rowProgress;
    info.isActive = true;

    Log::print("warming: %s (%d%%)", info.name.c_str(), (int)(info.progress * 100.0f));
}
