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
    unsigned int parts = mesh.getNumSubmeshes();
    if (parts < unsigned(kitParts)) {
        Log::print("kit has more parts than submeshes");
        return;
    }
    Log::print("submesh count verified");
}
