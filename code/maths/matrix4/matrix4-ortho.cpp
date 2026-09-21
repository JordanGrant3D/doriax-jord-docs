#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Top-down minimap projection over the arena; zoom via mapExtent.
    Matrix4 proj = Matrix4::orthoMatrix(-mapExtent, mapExtent, -mapExtent, mapExtent, 0.1f, 200.0f);
    Vector3 flat = proj * Vector3(10.0f, 0.0f, 6.0f);

    Log::print(("minimap point: " + flat.toString()).c_str());
}
