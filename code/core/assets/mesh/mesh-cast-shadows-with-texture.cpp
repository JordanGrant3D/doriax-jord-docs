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
    mesh.setCastShadowsWithTexture(unsigned(hairSubmesh), true);
    bool textured = mesh.isCastShadowsWithTexture(unsigned(hairSubmesh));
    mesh.setCastShadowsWithTexture(textured);
    Log::print("textured hair shadows enabled");
}
