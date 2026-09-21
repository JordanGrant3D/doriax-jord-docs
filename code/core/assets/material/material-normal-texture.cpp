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
    Material outfit = mesh.getMaterial();
    outfit.normalTexture = Texture(fabricNormalPath);
    mesh.setMaterial(outfit);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material outfit = mesh.getMaterial();
    outfit.normalTexture = Texture(fabricNormalPath);
    mesh.setMaterial(outfit);
    Log::print(("fabric normals: " + fabricNormalPath).c_str());
}
