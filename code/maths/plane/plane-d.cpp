#include "testerScript.h"

#include "Plane.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Plane(normal, constant) stores d = -constant, so passing the floor
    // height directly puts the surface at y == floorHeight.
    ground = Plane(Vector3::UNIT_Y, floorHeight);
    float height = ground.getDistance(obj.getPosition());

    Log::print(("height above floor: " + std::to_string(height)).c_str());
}
