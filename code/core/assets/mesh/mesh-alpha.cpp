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
    if (mesh.getAlpha() > cloakAlpha) {
        mesh.setAlpha(mesh.getAlpha() - 0.01f);
    }
    Log::print("cloak fade updated");
}
