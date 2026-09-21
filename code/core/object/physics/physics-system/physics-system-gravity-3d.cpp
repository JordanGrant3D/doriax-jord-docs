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
    physics->setGravity3D(Vector3(0.0f, heavyGravityY, 0.0f));
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Vector3 g = physics->getGravity3D();
    if (g.y > heavyGravityY + 0.01f) {
        physics->setGravity3D(0.0f, heavyGravityY, 0.0f);
    }
    Log::print(("3d gravity y: " + std::to_string(g.y)).c_str());
}
