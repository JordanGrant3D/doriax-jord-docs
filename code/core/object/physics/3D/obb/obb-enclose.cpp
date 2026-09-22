#include "testerScript.h"
#include "OBB.h"
#include "Log.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Grow the box to also contain another box.
    OBB other(Vector3(5.0f, 0.0f, 0.0f), Vector3(1.0f, 1.0f, 1.0f));
    box.enclose(other);

    // Grow the box to also contain a point.
    Vector3 point(0.0f, 10.0f, 0.0f);
    box.enclose(point);

    Log::debug(box.contains(point) ? "point enclosed" : "point outside");
}
