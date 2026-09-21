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

    // (0, 2, 0) is NOT unit length, so distances would come out halved.
    // normalize() fixes normal and d together, in place.
    ground = Plane(floorNormal, 0.0f);
    ground.normalize();

    float height = ground.getDistance(obj.getPosition());
    Log::print(("true height: " + std::to_string(height)).c_str());
}
