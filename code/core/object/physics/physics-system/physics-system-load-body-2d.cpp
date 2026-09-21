#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"
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
    Object hero(getScene(), getEntity());
    hero.setPosition(spawnX, spawnY);
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    if (needsReload) {
        bool ok = physics->loadBody2D(getEntity());
        Log::print(ok ? "hero 2d body reloaded" : "hero 2d body reload failed");
        needsReload = false;
    }
}
