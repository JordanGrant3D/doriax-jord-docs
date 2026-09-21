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
    emblem.createPolygon();
    unsigned int h = emblem.getHeight();
    if (int(h) > printHeight) {
        Log::print("emblem too tall for print area");
        return;
    }
    Log::print("emblem height approved");
}
