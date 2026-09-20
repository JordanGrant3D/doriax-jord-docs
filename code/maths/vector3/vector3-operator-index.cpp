#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());

    // Read components by index (const overload).
    float x = pos[0];
    float y = pos[1];
    float z = pos[2];

    // Write through the index operator (non-const overload).
    pos[1] = 5.0f;

    // Use the edited vector in the scene.
    obj.setPosition(pos);

    // x == 1.0f, y was 2.0f, z == 3.0f, pos is now (1, 5, 3).
    (void)x; (void)y; (void)z;
}
