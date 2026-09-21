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
    unsigned int w = emblem.getWidth();
    if (int(w) > printWidth) {
        Log::print("emblem too wide for print area");
        return;
    }
    Log::print("emblem width approved");
}
