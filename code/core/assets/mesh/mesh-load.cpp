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
    (void)bodyMesh;
    if (!mesh.load()) {
        Log::print("hero body mesh failed to load");
        return;
    }
    Log::print("hero body mesh loaded");
}
