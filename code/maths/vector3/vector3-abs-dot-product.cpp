#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());`

    Vector3 vel(2.0f, -3.0f, 1.0f);
    float alignment = vel.absDotProduct(surfaceNormal);
    // alignment == |2*0| + |-3*1| + |1*0| == 3.0: strong motion along the normal axis.

    // Use it as a bounce threshold: only bounce when the impact is strong.
    if (alignment > 1.0f) {
        Vector3 pos = obj.getPosition();
        pos.y += 0.5f;
        obj.setPosition(pos);
    }
}
