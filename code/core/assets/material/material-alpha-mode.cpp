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
    Material look = mesh.getMaterial();
    look.alphaMode = ghostEffect ? MaterialAlphaMode::BLEND : MaterialAlphaMode::MASK;
    mesh.setMaterial(look);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material look = mesh.getMaterial();
    look.alphaMode = ghostEffect ? MaterialAlphaMode::BLEND : MaterialAlphaMode::MASK;
    mesh.setMaterial(look);
    if (look.alphaMode == MaterialAlphaMode::BLEND) {
        Log::print("hero look: ghost blend");
    } else {
        Log::print("hero look: cutout mask");
    }
}
