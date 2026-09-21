#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Dim finished rows: inspect snapshots directly, no real build.
    ResourceBuildInfo warming;
    warming.type = ResourceType::Model;
    warming.name = "Hero_Run";
    warming.progress = 0.4f;
    warming.isActive = true;

    ResourceBuildInfo done;
    done.type = ResourceType::Texture;
    done.name = "Hero_Diffuse";
    done.progress = 1.0f;
    done.isActive = false;

    const ResourceBuildInfo& row = (activeOnly && !done.isActive) ? warming : done;
    Log::print("row: %s active=%d", row.name.c_str(), (int)row.isActive);
}
