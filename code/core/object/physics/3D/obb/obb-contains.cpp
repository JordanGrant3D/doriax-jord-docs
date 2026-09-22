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

    // Full containment test against a point.
    Vector3 point(0.0f, 0.0f, 0.0f);
    Log::debug(box.contains(point) ? "point inside" : "point outside");

    // Full containment test against another box.
    OBB inner(Vector3(0.0f, 0.0f, 0.0f), Vector3(0.5f, 0.5f, 0.5f));
    Log::debug(box.contains(inner) ? "box inside" : "box outside");
}
