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

    // Fetch a single corner by name.
    Vector3 farCorner = box.getCorner(OBB::FAR_LEFT_BOTTOM);

    // Fetch all 8 corners at once.
    const Vector3* corners = box.getCorners();
    Vector3 first = corners[OBB::FAR_LEFT_BOTTOM];

    Log::debug("corner: %s", farCorner.toString().c_str());
    Log::debug("first: %s", first.toString().c_str());
}
