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
    mesh.updateInstance(size_t(subIndex), Vector3(benchX, 0.0f, 0.0f));
    mesh.updateInstance(size_t(subIndex), benchX + 1.0f, 0.0f, 0.0f);
    Log::print("substitute helmet moved");
}
