#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Object.h"

#include "Log.h"
#include "Engine.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    physics->setPointsToMeterScale2D(pointsPerMeter);
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    float s = physics->getPointsToMeterScale2D();
    if (s != pointsPerMeter) {
        physics->setPointsToMeterScale2D(pointsPerMeter);
    }
    Log::print(("points per meter: " + std::to_string(s)).c_str());
}
