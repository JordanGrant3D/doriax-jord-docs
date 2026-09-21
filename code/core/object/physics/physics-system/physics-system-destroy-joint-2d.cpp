#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Joint2D.h"
#include "Object.h"
#include "component/Joint2DComponent.h"

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
    Joint2D joint(getScene());
    jointEntity = joint.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    if (cutRope) {
        Joint2D joint(getScene(), jointEntity);
        Joint2DComponent& jc = joint.getComponent<Joint2DComponent>();
        physics->destroyJoint2D(jc);
        Log::print("grapple rope cut");
        cutRope = false;
    }
}
