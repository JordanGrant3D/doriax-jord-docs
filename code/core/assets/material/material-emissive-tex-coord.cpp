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
    skin.emissiveTexCoord = visorGlowUVSet;
    mesh.setMaterial(skin);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material skin = mesh.getMaterial();
    skin.emissiveTexCoord = visorGlowUVSet;
    mesh.setMaterial(skin);
    Log::print(("visor glow UV set: " + std::to_string(skin.emissiveTexCoord)).c_str());
}
