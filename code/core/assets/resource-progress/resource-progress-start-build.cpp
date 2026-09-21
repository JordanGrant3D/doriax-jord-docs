#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Synthetic doc-example id: registers a tracker entry only, never a real build.
    const uint64_t kDocExampleId = 424201;
    ResourceProgress::startBuild(kDocExampleId, ResourceType::Texture, warmupAsset);
    ResourceProgress::updateProgress(kDocExampleId, 0.5f);
    Log::print("warmup registered: %s", warmupAsset.c_str());
    ResourceProgress::completeBuild(kDocExampleId);
}
