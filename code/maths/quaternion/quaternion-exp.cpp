#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    facing = Quaternion::IDENTITY;
}

void testerScript::onUpdate() {
    // Per-frame rotation step from an angular velocity, then accumulate.
    Quaternion step(spinRate.x, spinRate.y, spinRate.z, 0.0f);
    facing = facing * (step * (0.5f * Engine::getDeltatime())).exp();
    facing.normalize();

    Log::print(("facing: " + facing.toString()).c_str());
}
