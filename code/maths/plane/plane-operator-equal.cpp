#include "testerScript.h"

#include "Plane.h"

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
    Plane rebuilt(floorNormal, 0.0f);

    if (rebuilt == authored) {
        Log::print("rebuilt plane matches the authored floor");
    } else {
        Log::print("rebuilt plane drifted from the authored floor");
    }
}
