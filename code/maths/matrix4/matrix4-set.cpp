#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    spawn = Matrix4::translateMatrix(obj.getPosition());

    // Override just the height of the translation column.
    spawn.set(3, 1, spawnHeight);

    Log::print(("spawn: " + spawn.toString()).c_str());
}
