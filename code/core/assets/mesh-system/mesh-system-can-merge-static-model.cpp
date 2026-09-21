#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    ModelComponent& model = getComponent<ModelComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)armorFile;
    std::string reason;
    if (!getScene()->getSystem<MeshSystem>()->canMergeStaticModel(model, mesh, &reason)) {
        Log::print("armor merge rejected");
        return;
    }
    Log::print("armor merge allowed");
}
