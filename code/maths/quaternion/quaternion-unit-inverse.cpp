#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Round-trip a forward vector out to world space and back.
    Vector3 world = obj.getRotation() * testVector;
    Vector3 back = obj.getRotation().unitInverse() * world;

    Log::print(("round-trip: " + back.toString()).c_str());
}
