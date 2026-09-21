#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    MeshComponent& mesh = getComponent<MeshComponent>();
    getScene()->getSystem<MeshSystem>()->createBox(mesh, crateSize, crateSize, crateSize);
    Log::print("equipment crate created");
}
