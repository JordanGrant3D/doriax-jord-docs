#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());

    // Copy the stored target into a working vector.
    Vector3 pos;
    pos = target;

    // Snap this object to the copied position.
    obj.setPosition(pos);
}
