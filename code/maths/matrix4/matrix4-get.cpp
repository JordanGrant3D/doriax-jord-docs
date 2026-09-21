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
    spawn = Matrix4::translateMatrix(10.0f, 1.0f, 6.0f);
}

void testerScript::onUpdate() {
    // Translation lives in column 3: recover the spawn point.
    Vector3 recovered(spawn.get(3, 0), spawn.get(3, 1), spawn.get(3, 2));

    Log::print(("recovered spawn: " + recovered.toString()).c_str());
}
