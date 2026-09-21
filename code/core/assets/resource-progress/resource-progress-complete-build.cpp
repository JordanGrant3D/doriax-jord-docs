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
    const uint64_t kDocExampleId = 424203;
    ResourceProgress::startBuild(kDocExampleId, ResourceType::Texture, finishedAsset);
    ResourceProgress::completeBuild(kDocExampleId);

    Log::print("finished: %s (busy=%d)", finishedAsset.c_str(),
        (int)ResourceProgress::hasActiveBuilds());
}
