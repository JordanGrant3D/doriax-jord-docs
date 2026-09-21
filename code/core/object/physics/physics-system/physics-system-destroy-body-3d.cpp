#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body3D.h"
#include "Object.h"
#include "component/Body3DComponent.h"

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
        Body3DComponent& comp = getComponent<Body3DComponent>();
        physics->destroyBody3D(comp);
        Log::print("distant camera 3d body destroyed");
    }
}
