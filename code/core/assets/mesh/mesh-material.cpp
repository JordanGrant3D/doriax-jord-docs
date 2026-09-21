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
    Material trim = mesh.getMaterial(armorSubmesh);
    mesh.setMaterial(trim);
    mesh.setMaterial(unsigned(armorSubmesh), mesh.getMaterial(unsigned(armorSubmesh)));
    Log::print("armor submesh material swapped");
}
