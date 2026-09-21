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
    physics->setGravity(0.0f, worldGravityY, 0.0f);
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Vector3 g = physics->getGravity();
    if (showGravity && g.y < -30.0f) {
        physics->setGravity(0.0f, worldGravityY, 0.0f);
    }
    Log::print(("world gravity y: " + std::to_string(g.y)).c_str());
}
