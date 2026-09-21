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
    JPH::PhysicsSystem* world = physics->getWorld3D();
    (void)world;
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    JPH::PhysicsSystem* world = physics->getWorld3D();
    if (world != nullptr && (int)world->GetNumBodies() < maxBodies) {
        Log::print(("3d bodies: " + std::to_string(world->GetNumBodies())).c_str());
    }
}
