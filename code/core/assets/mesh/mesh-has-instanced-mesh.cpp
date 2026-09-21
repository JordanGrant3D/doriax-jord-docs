#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    if (rosterReady && !mesh.hasInstancedMesh()) {
        Log::print("roster instancing missing");
        return;
    }
    Log::print("roster instancing present");
}
