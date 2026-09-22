#include "testerScript.h"
#include "AABB.h"
#include "Log.h"

#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Fetch one corner by enum.
    Vector3 corner = box.getCorner(AABB::FAR_LEFT_BOTTOM);
    Log::print(("corner: " + corner.toString()).c_str());

    // Or iterate all 8 corners at once.
    const Vector3* corners = box.getCorners();
    for (int i = 0; i < 8; ++i) {
        Log::print(("corner " + std::to_string(i) + ": " + corners[i].toString()).c_str());
    }
}
