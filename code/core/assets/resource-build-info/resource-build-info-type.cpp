#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Loading-screen warmup row: inspect a snapshot directly, no real build.
    ResourceBuildInfo info;
    info.name = warmupAsset;
    info.progress = 0.25f;
    info.isActive = true;
    switch (warmupKind) {
        case 0: info.type = ResourceType::Shader; break;
        case 2: info.type = ResourceType::Model; break;
        case 3: info.type = ResourceType::Sound; break;
        default: info.type = ResourceType::Texture; break;
    }

    const char* icon = "texture";
    if (info.type == ResourceType::Shader) {
        icon = "shader";
    } else if (info.type == ResourceType::Model) {
        icon = "model";
    } else if (info.type == ResourceType::Sound) {
        icon = "sound";
    }
    Log::print("warmup [%s]: %s", icon, info.name.c_str());
}
