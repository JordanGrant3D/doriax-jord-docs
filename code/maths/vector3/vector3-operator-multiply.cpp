#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    float dt = Engine::getDeltatime();

    // Scalar multiply: velocity step along direction.
    Vector3 step = direction * (speed * dt);

    // Component-wise multiply: stretch the step vertically (x*1, y*2, z*1).
    Vector3 stretched = step * axisScale;

    // Free-function order also works: (speed * direction).
    Vector3 alt = (speed * direction) * dt;
    (void)alt;

    obj.setPosition(obj.getPosition() + stretched);
}
