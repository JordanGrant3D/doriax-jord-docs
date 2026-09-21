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
    size_t count = mesh.getNumInstances();
    if (int(count) > instanceBudget) {
        Log::print("instance budget exceeded");
        return;
    }
    Log::print("instance count within budget");
}
