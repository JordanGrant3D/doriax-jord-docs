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
    facing[1] += drift; // hand tweak drifts off unit length...

    facing.normalize(); // ...so repair it before driving the model.
    obj.setRotation(facing);

    Log::print(("unit: " + std::to_string(facing.norm())).c_str());
}
