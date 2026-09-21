#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"
#include "Object.h"
#include "box2d/box2d.h"

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
    b2WorldId world = physics->getWorld2D();
    (void)world;
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    b2WorldId world = physics->getWorld2D();
    if (b2World_IsValid(world)) {
        Log::print(("sight world valid, range: " + std::to_string(sightRange)).c_str());
    }
}
