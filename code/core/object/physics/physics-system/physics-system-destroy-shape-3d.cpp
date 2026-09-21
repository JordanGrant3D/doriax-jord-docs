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
    if (stealthed) {
        Body3DComponent& comp = getComponent<Body3DComponent>();
        physics->destroyShape3D(comp, (size_t)shieldIndex);
        Log::print("shield shape destroyed");
        stealthed = false;
    }
}
