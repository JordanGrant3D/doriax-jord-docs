#include "testerScript.h"
#include "Log.h"

#include <algorithm>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Warmup-bar fill: inspect a snapshot directly, no real build.
    ResourceBuildInfo info;
    info.type = ResourceType::Texture;
    info.name = "Hero_Diffuse";
    info.isActive = true;
    info.progress = std::clamp(barFill, 0.0f, 1.0f);

    Log::print("warmup bar: %d%%", (int)(info.progress * 100.0f));
}
