#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    savedSpawn = Matrix4::translateMatrix(obj.getPosition());
}

void testerScript::onUpdate() {
    // Snapshot the tuned spawn, then lift the copy only.
    workSpawn = savedSpawn;
    workSpawn.translateInPlace(0.0f, 2.0f, 0.0f);

    Log::print(("work det: " + std::to_string(workSpawn.determinant())).c_str());
}
