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
    mesh.setRenderInReflectionProbes(!firstPerson);
    bool inProbes = mesh.isRenderInReflectionProbes();
    (void)inProbes;
    Log::print("reflection probe flag synced");
}
