#include "testerScript.h"
#include "AABB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Set the min corner from a single vector.
    box.setMinimum(minCorner);

    // Set the min corner from three coordinates.
    box.setMinimum(-2.0f, -1.0f, -2.0f);

    // Nudge each axis of the min corner independently.
    box.setMinimumX(-3.0f);
    box.setMinimumY(-2.0f);
    box.setMinimumZ(-3.0f);

    Log::print(("box min: " + box.getMinimum().toString()).c_str());
}
