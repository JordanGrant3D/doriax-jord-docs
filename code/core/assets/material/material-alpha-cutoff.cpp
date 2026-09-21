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
    Material ghillie = mesh.getMaterial();
    ghillie.alphaMode = MaterialAlphaMode::MASK;
    ghillie.alphaCutoff = cutoutCutoff;
    mesh.setMaterial(ghillie);
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    Material ghillie = mesh.getMaterial();
    ghillie.alphaMode = MaterialAlphaMode::MASK;
    ghillie.alphaCutoff = cutoutCutoff;
    mesh.setMaterial(ghillie);
    Log::print(("ghillie cutoff: " + std::to_string(ghillie.alphaCutoff)).c_str());
}
