#include "testerScript.h"
#include "OBB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    Log::print(box.isFinite() ? "box is finite" : "box is not finite");

    box.setNull();
    Log::print(box.isNull() ? "box is null" : "box is not null");

    box.setInfinite();
    Log::print(box.isInfinite() ? "box is infinite" : "box is not infinite");

    box.setFinite();
    Log::print(box.isFinite() ? "box is finite again" : "box is not finite");
}
