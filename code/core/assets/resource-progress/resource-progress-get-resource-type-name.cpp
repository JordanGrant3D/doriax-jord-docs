#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Pure label lookup: no tracker state touched, no builds triggered.
    ResourceType type = ResourceType::Texture;
    switch (kindIndex) {
        case 0: type = ResourceType::Shader; break;
        case 2: type = ResourceType::Model; break;
        case 3: type = ResourceType::Sound; break;
        default: break;
    }

    Log::print("warmup kind: %s", ResourceProgress::getResourceTypeName(type).c_str());
}
