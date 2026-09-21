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
    mesh.setInstanceVisible(size_t(benchIndex), false);
    bool shown = mesh.isInstanceVisible(size_t(benchIndex));
    (void)shown;
    Log::print("benched helmet hidden");
}
