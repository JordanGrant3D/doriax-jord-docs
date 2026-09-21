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

    Plane floor(Vector3::UNIT_Y, 5.0f);

    // Toggle live: measure height to the floor, or to the flipped ceiling.
    Plane active = useCeiling ? -floor : floor;
    float clearance = active.getDistance(obj.getPosition());

    Log::print(("clearance: " + std::to_string(clearance)).c_str());
}
