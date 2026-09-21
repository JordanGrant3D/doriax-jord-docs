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
    mesh.setInstancedCylindricalBillboard(uprightBanners);
    bool upright = mesh.isInstancedCylindricalBillboard();
    (void)upright;
    Log::print("cylindrical billboard synced");
}
