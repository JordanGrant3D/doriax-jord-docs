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

    // Fit the ramp plane through its three corner points; drag them live to
    // reshape the slope and watch the character height follow.
    ramp.redefine(rampP0, rampP1, rampP2);
    float height = ramp.getDistance(obj.getPosition());

    Log::print(("height above ramp: " + std::to_string(height)).c_str());
}
