#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Streams every frame when enabled; silent otherwise.
    if (verboseTelemetry) {
        Log::verbose(("pos: " + obj.getPosition().toString()).c_str());
    }
}
