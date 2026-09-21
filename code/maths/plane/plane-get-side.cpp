#include "testerScript.h"

#include "Plane.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 pos = obj.getPosition();

    // Point overload: which side of the wall is the character on?
    if (wall.getSide(pos) == Plane::NEGATIVE_SIDE) {
        Log::print("character crossed the wall plane");
    }

    // Centre/half-size overload: test the character's body box in one call.
    Plane::Side bodySide = wall.getSide(pos, Vector3(0.5f, 1.0f, 0.5f));
    if (bodySide == Plane::BOTH_SIDE) {
        Log::print("body straddles the wall plane");
    }

    // AABB / OBB overloads: test whole colliders the same way.
    AABB crate(Vector3(4.0f, 0.0f, -1.0f), Vector3(6.0f, 2.0f, 1.0f));
    OBB blade(Vector3(2.0f, 1.0f, 0.0f), Vector3(1.5f, 0.2f, 0.2f));
    (void)wall.getSide(crate);
    (void)wall.getSide(blade);
}
