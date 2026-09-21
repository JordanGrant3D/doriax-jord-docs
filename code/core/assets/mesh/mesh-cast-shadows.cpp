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
    mesh.setCastShadows(heroLOD);
    bool casting = mesh.isCastShadows();
    (void)casting;
    Log::print("shadow casting synced");
}
