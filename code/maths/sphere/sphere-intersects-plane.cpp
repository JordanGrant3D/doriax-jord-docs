#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Sphere body(obj.getPosition(), bodyRadius);

    // Ground plane: y-up normal, constant 0 (the y == 0 floor).
    Plane ground(Vector3::UNIT_Y, 0.0f);

    if (body.intersects(ground)) {
        Log::print("body touches the ground plane");
    }
}
