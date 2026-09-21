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

    Sphere hurt(obj.getPosition(), hurtRadius);
    OBB blade(bladeCenter, bladeHalfExtents);

    if (hurt.intersects(blade)) {
        Log::print("blade entered the hurt zone");
    }
}
