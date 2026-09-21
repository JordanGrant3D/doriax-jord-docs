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

    Sphere reach(obj.getPosition(), interactRadius);

    // Same result as reach.contains(leverPosition); use whichever reads better.
    if (reach.intersects(leverPosition)) {
        Log::print("lever within reach, press E");
    }
}
