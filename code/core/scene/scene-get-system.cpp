#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Log.h"

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
    auto physics = scene->getSystem<PhysicsSystem>();
    (void)physics;
    Log::print("physics system resolved");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = scene->getSystem<PhysicsSystem>();
    Vector3 g = physics->getGravity3D();
    if (showGravity && g.y > -20.0f) {
        Log::print("gravity nominal");
    } else {
        Log::print("gravity checked");
    }
}
