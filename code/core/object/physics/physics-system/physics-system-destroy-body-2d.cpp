#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"
#include "Object.h"
#include "component/Body2DComponent.h"

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
    (void)hero;
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Object hero(getScene(), getEntity());
    if (hero.getPosition().length() > cullDistance) {
        Body2DComponent& comp = getComponent<Body2DComponent>();
        physics->destroyBody2D(comp);
        Log::print("distant guard 2d body destroyed");
    }
}
