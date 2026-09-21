#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Joint2D.h"
#include "Body2D.h"
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
    Object hero(getScene(), getEntity());
    Object anchorPost(getScene());
    Body2D heroBody(getScene(), getEntity());
    heroBody.createBoxShape(1.0f, 1.8f);
    heroBody.load();
    Body2D postBody(anchorPost.getScene(), anchorPost.getEntity());
    postBody.createBoxShape(1.0f, 1.0f);
    postBody.load();
    Joint2D joint(getScene());
    Joint2DComponent& jc = joint.getComponent<Joint2DComponent>();
    auto physics = getScene()->getSystem<PhysicsSystem>();
    bool ok = physics->loadWheelJoint2D(joint.getEntity(), jc, getEntity(), anchorPost.getEntity(), Vector2(0.0f, 0.0f), Vector2(0.0f, wheelAxisY));
    Log::print(ok ? "patrol wheel loaded" : "patrol wheel failed");
    jointEntity = joint.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Joint2D joint(getScene(), jointEntity);
    Joint2DComponent& jc = joint.getComponent<Joint2DComponent>();
    (void)jc;
    (void)physics;
    Log::print("joint entity tracked");
}
