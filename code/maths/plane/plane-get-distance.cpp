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

    float height = ground.getDistance(obj.getPosition());
    isGrounded = height <= groundSnapHeight;

    Log::print(("height: " + std::to_string(height)).c_str());
}
