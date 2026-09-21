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
    for (int i = 0; i < emblemPoints; ++i) {
        emblem.addVertex(float(i) * 0.1f, float(i) * 0.05f);
    }
    if (!emblem.createPolygon()) {
        Log::print("emblem polygon build failed");
        return;
    }
    Log::print("emblem polygon created");
}
