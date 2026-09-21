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
    physics->setGravity2D(0.0f, zoneGravityY);
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Vector2 g = physics->getGravity2D();
    if (g.y > zoneGravityY + 0.01f) {
        physics->setGravity2D(0.0f, zoneGravityY);
    }
    Log::print(("2d gravity y: " + std::to_string(g.y)).c_str());
}
