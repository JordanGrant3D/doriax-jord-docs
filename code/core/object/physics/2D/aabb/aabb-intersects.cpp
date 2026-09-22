#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB triggerZone(Vector3(-2.0f, -1.0f, -2.0f), Vector3(2.0f, 1.0f, 2.0f));

    AABB box(Vector3(1.0f, 0.0f, 1.0f), Vector3(3.0f, 2.0f, 3.0f));
    Log::print(triggerZone.intersects(box) ? "box overlaps trigger" : "box outside trigger");

    OBB obb = box.getOBB();
    Log::print(triggerZone.intersects(obb) ? "obb overlaps trigger" : "obb outside trigger");

    Plane ground(Vector3(0.0f, 1.0f, 0.0f), 0.0f);
    Log::print(triggerZone.intersects(ground) ? "trigger crosses ground plane" : "trigger misses ground plane");

    Sphere blast(Vector3(0.0f, 0.0f, 0.0f), 1.5f);
    Log::print(triggerZone.intersects(blast) ? "blast overlaps trigger" : "blast outside trigger");

    Vector3 point(0.0f, 0.0f, 0.0f);
    Log::print(triggerZone.intersects(point) ? "point inside trigger" : "point outside trigger");
}
