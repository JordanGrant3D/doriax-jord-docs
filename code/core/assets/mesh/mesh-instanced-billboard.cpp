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
    mesh.setInstancedBillboard(crowdBillboard);
    mesh.setInstancedBillboard(crowdBillboard, false);
    bool billboard = mesh.isInstancedBillboard();
    (void)billboard;
    Log::print("crowd billboard synced");
}
