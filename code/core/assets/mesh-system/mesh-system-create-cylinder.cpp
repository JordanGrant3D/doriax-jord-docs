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
    getScene()->getSystem<MeshSystem>()->createCylinder(mesh, 0.5f, 0.4f, pedestalHeight);
    Log::print("trophy pedestal created");
}
