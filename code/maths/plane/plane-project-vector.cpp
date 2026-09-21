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

    // Raw downhill wish direction, then flattened onto the ramp surface.
    Vector3 wish(0.0f, -1.0f, -1.0f);
    Vector3 slide = ramp.projectVector(wish);

    obj.setPosition(obj.getPosition() + slide.normalized() * (moveSpeed * Engine::getDeltatime()));
    Log::print(("slide dir: " + slide.toString()).c_str());
}
