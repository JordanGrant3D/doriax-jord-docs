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
    getScene()->getSystem<MeshSystem>()->createCapsule(mesh, 0.35f, 0.35f, doubleHeight);
    Log::print("body double capsule created");
}
