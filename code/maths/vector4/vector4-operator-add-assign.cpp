#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    blendWeights = Vector4::UNIT_X;
}

void testerScript::onUpdate() {
    // Stack the waiting-idle channel on top, then lift everything uniformly.
    blendWeights += Vector4::UNIT_W * (fillRate * Engine::getDeltatime());
    blendWeights += 0.01f;

    Log::print(("blend weights: " + blendWeights.toString()).c_str());
}
