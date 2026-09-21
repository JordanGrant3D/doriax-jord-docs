#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    MeshPolygon emblem(getScene(), getEntity());
    if (retraceEmblem) {
        emblem.clearVertices();
        retraceEmblem = false;
    }
    Log::print("emblem vertices cleared");
}
