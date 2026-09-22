#include "testerScript.h"
#include "OBB.h"
#include "AABB.h"
#include "Sphere.h"
#include "Plane.h"
#include "Log.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    OBB other(Vector3(1.0f, 0.0f, 0.0f), Vector3(1.0f, 1.0f, 1.0f));
    AABB aabb(Vector3(-2.0f, -2.0f, -2.0f), Vector3(0.0f, 0.0f, 0.0f));
    Sphere sphere(Vector3(0.0f, 0.0f, 0.0f), 1.0f);
    Plane plane(Vector3(0.0f, 1.0f, 0.0f), 0.0f);
    Vector3 point(0.0f, 0.0f, 0.0f);

    Log::debug(box.intersects(other) ? "obb hit" : "obb miss");
    Log::debug(box.intersects(aabb) ? "aabb hit" : "aabb miss");
    Log::debug(box.intersects(sphere) ? "sphere hit" : "sphere miss");
    Log::debug(box.intersects(plane) ? "plane hit" : "plane miss");
    Log::debug(box.intersects(point) ? "point hit" : "point miss");
}
