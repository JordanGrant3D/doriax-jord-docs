#include "testerScript.h"

#include "Plane.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Plane authored(floorNormal, 0.0f);

    // normalized() preserves authored, so the properties tab keeps showing
    // the raw (0, 2, 0) values while measuring with the unit copy.
    Plane fixed = authored.normalized();
    float height = fixed.getDistance(obj.getPosition());

    Log::print(("true height: " + std::to_string(height)).c_str());
}
