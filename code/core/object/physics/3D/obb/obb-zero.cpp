#include "testerScript.h"
#include "OBB.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Start from a null box, then grow it to fit each point.
    OBB bounds = OBB::ZERO;
    bounds.enclose(firstPoint);
    bounds.enclose(secondPoint);

    Log::print(("bounds center: " + bounds.getCenter().toString()).c_str());
    Log::print(("bounds volume: " + std::to_string(bounds.volume())).c_str());
}
