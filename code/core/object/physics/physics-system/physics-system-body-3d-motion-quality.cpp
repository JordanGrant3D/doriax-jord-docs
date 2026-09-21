#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body3D.h"
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
    JPH::EMotionQuality q = PhysicsSystem::getBody3DMotionQualityToJolt(Body3DMotionQuality::LINEAR_CAST);
    (void)q;
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Body3DMotionQuality want = fastProjectile ? Body3DMotionQuality::LINEAR_CAST : Body3DMotionQuality::DISCRETE;
    JPH::EMotionQuality q = PhysicsSystem::getBody3DMotionQualityToJolt(want);
    (void)q;
    Log::print(fastProjectile ? "bolt uses linear cast" : "bolt uses discrete");
}
