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
    Material skin = mesh.getMaterial();
    skin.emissiveTexture = Texture(visorGlowPath);
    skin.emissiveFactor = Vector3(1.0f, 0.2f, 0.1f);
    mesh.setMaterial(skin);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material skin = mesh.getMaterial();
    skin.emissiveTexture = Texture(visorGlowPath);
    mesh.setMaterial(skin);
    Log::print(("visor glow map: " + visorGlowPath).c_str());
}
