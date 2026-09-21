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
    skin.emissiveFactor = damageFlash;
    mesh.setMaterial(skin);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material skin = mesh.getMaterial();
    skin.emissiveFactor = damageFlash;
    if (skin.emissiveFactor.x > 0.01f) {
        skin.emissiveFactor = skin.emissiveFactor - Vector3(flashDecay * Engine::getDeltatime(), 0.0f, 0.0f);
    }
    mesh.setMaterial(skin);
    Log::print(("damage glow: " + skin.emissiveFactor.toString()).c_str());
}
