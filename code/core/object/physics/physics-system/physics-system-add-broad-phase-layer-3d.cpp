#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body3D.h"
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
    physics->addBroadPhaseLayer3D((uint8_t)sensorLayer, 0x01u);
    physics->addBroadPhaseLayer3D((uint8_t)(sensorLayer + 1), 0x03u, 0x02u);
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    (void)physics;
    Log::print(("broadphase layers set: " + std::to_string(sensorLayer)).c_str());
}
