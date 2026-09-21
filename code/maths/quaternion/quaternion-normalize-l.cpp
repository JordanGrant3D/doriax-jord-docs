#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Quaternion facing = obj.getRotation();
    facing[1] += drift;
    float wasNorm = facing.normalizeL();
    obj.setRotation(facing);

    Log::print(("drift was: " + std::to_string(wasNorm)).c_str());
}
