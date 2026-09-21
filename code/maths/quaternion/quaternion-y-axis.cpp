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

    Vector3 up = obj.getRotation().yAxis();
    float tilt = Vector3::UNIT_Y.dotProduct(up);

    if (showAxis) Log::print(("upright: " + std::to_string(tilt)).c_str());
}
