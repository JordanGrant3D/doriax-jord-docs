#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Mesh mesh(getScene(), getEntity());
    mesh.setAsMirror(Vector3(0.0f, mirrorNormalY, 0.0f));
    Log::print("locker mirror enabled");
}
void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    if (!mesh.isMirror()) {
        mesh.setAsMirror();
    }
    Log::print("mirror state verified");
}
