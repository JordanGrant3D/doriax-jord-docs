#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Synthetic doc-example id: tracker entry only, never a real build.
    const uint64_t kDocExampleId = 424202;
    ResourceProgress::startBuild(kDocExampleId, ResourceType::Model, "Hero_Run");
    ResourceProgress::updateProgress(kDocExampleId, simulatedFill);

    ResourceBuildInfo current = ResourceProgress::getCurrentBuild();
    Log::print("warmup fill: %s %d%%", current.name.c_str(), (int)(current.progress * 100.0f));

    ResourceProgress::completeBuild(kDocExampleId);
}
