#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    MeshPolygon emblem(getScene(), getEntity());
    emblem.addVertex(cornerX, cornerY);
    emblem.addVertex(Vector3(cornerX + 0.1f, cornerY, 0.0f));
    emblem.createPolygon();
    Log::print("badge vertices traced");
}
