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
    mesh.setReceiveIBL(outdoors);
    bool ibl = mesh.isReceiveIBL();
    (void)ibl;
    Log::print("IBL reception synced");
}
