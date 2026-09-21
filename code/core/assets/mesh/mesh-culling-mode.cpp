#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    CullingMode mode = mesh.getCullingMode();
    mesh.setCullingMode(mirrorPreview ? CullingMode::FRONT : mode);
    Log::print("culling mode synced");
}
