#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    zone = Sphere(obj.getPosition(), 1.0f);
    target = Sphere(obj.getPosition(), targetRadius);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    target.center = obj.getPosition();
    zone.center = obj.getPosition();
    zone.radius += (targetRadius - zone.radius) * 0.1f;

    if (zone == target) {
        Log::print("zone reached target shape");
    }
}
