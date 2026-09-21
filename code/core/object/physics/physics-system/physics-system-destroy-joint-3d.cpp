#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Joint3D.h"
#include "Object.h"
#include "component/Joint3DComponent.h"

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
    Joint3D joint(getScene());
    jointEntity = joint.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    if (releaseChain) {
        Joint3D joint(getScene(), jointEntity);
        Joint3DComponent& jc = joint.getComponent<Joint3DComponent>();
        physics->destroyJoint3D(jc);
        Log::print("chandelier released");
        releaseChain = false;
    }
}
