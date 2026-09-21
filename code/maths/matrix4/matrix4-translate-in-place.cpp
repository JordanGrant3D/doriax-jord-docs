#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    platform.identity();
}

void testerScript::onUpdate() {
    // Float the platform upward in place, frame-rate independent.
    platform.translateInPlace(0.0f, riseSpeed * Engine::getDeltatime(), 0.0f);

    Log::print(("platform: " + platform.toString()).c_str());
}
