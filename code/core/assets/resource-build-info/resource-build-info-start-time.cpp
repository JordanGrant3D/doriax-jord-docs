#include "testerScript.h"
#include "Log.h"

#include <chrono>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Stall detector: inspect a snapshot directly, no real build.
    ResourceBuildInfo info;
    info.type = ResourceType::Model;
    info.name = "Hero_Run";
    info.progress = 0.4f;
    info.isActive = true;
    info.startTime = std::chrono::steady_clock::now() - std::chrono::seconds(7);

    float age = std::chrono::duration<float>(std::chrono::steady_clock::now() - info.startTime).count();
    if (age > stallTimeout) {
        Log::print("warmup stalled: %s (%.1fs)", info.name.c_str(), (double)age);
    } else {
        Log::print("warming: %s (%.1fs)", info.name.c_str(), (double)age);
    }
}
