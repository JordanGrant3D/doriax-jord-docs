#include "testerScript.h"
#include "AABB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Set the max corner from a single vector.
    box.setMaximum(maxCorner);

    // Set the max corner from three coordinates.
    box.setMaximum(2.0f, 1.0f, 2.0f);

    // Nudge each axis of the max corner independently.
    box.setMaximumX(3.0f);
    box.setMaximumY(2.0f);
    box.setMaximumZ(3.0f);

    Log::print(("box max: " + box.getMaximum().toString()).c_str());
}
