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
    (void)kitRevision;
    getScene()->getSystem<MeshSystem>()->clearMeshNodeMapping(model);
    Log::print("mesh node mapping cleared");
}
