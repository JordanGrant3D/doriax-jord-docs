#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    // Drain the jump channel back out, then lower everything uniformly.
    blendWeights -= Vector4::UNIT_Z * (drainRate * Engine::getDeltatime());
    blendWeights -= 0.01f;

    Log::print(("blend weights: " + blendWeights.toString()).c_str());
}
