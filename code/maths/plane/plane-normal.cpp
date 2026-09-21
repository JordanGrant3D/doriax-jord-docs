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
    ground = Plane(groundNormal, 0.0f);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Rebuild the ground from the live-tuned normal; height of the
    // CharacterController character above it drives landing checks.
    ground = Plane(groundNormal, 0.0f);
    float height = ground.getDistance(obj.getPosition());

    Log::print(("height above ground: " + std::to_string(height)).c_str());
}
