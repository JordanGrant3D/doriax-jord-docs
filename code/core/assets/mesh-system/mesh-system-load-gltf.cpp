#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    if (!getScene()->getSystem<MeshSystem>()->loadGLTF(getEntity(), awayKit, true)) {
        Log::print("away kit GLTF failed");
        return;
    }
    Log::print("away kit GLTF loading");
}
