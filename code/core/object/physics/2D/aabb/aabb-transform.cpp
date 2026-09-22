#include "testerScript.h"
#include "AABB.h"
#include "Matrix4.h"
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

    // Move the box 5 units along X; the result stays axis-aligned.
    box.transform(Matrix4::translateMatrix(5.0f, 0.0f, 0.0f));
    Log::print(("center: " + box.getCenter().toString()).c_str());
}
