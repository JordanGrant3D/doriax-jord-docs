#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Mesh mesh(getScene(), getEntity());
    mesh.addInstance(Vector3(benchSlot, 0.0f, 0.0f));
    mesh.addInstance(benchSlot + 1.0f, 0.0f, 0.0f);
    Log::print("bench helmets instanced");
}
