#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Mesh mesh(getScene(), getEntity());
    Material armor = mesh.getMaterial();
    armor.metallicRoughnessTexture = Texture(armorMaskPath);
    mesh.setMaterial(armor);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material armor = mesh.getMaterial();
    armor.metallicRoughnessTexture = Texture(armorMaskPath);
    mesh.setMaterial(armor);
    Log::print(("armor mask: " + armorMaskPath).c_str());
}
