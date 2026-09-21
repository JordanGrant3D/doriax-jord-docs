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

    Plane::Side side = ground.getSide(obj.getPosition());
    if (side == Plane::POSITIVE_SIDE) {
        Log::print("character above the ground plane");
    } else if (side == Plane::NEGATIVE_SIDE) {
        Log::print("character fell below the ground plane");
    } else {
        Log::print("character exactly on the ground plane");
    }
}
