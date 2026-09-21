#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Joint3D.h"
#include "Body3D.h"
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
    Object hero(getScene(), getEntity());
    Object anchorPost(getScene());
    Body3D heroBody(getScene(), getEntity());
    heroBody.createCapsuleShape(1.7f, 0.35f);
    heroBody.load();
    Body3D postBody(anchorPost.getScene(), anchorPost.getEntity());
    postBody.createBoxShape(1.0f, 1.0f, 1.0f);
    postBody.load();
    Joint3D joint(getScene());
    Joint3DComponent& jc = joint.getComponent<Joint3DComponent>();
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Joint3D hingeObjA(getScene());
    Joint3D hingeObjB(getScene());
    bool ok = physics->loadGearJoint3D(jc, getEntity(), anchorPost.getEntity(), hingeObjA.getEntity(), hingeObjB.getEntity(), gearTeeth, gearTeeth * 2);
    Log::print(ok ? "vault gears loaded" : "vault gears failed");
    jointEntity = joint.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Joint3D joint(getScene(), jointEntity);
    Joint3DComponent& jc = joint.getComponent<Joint3DComponent>();
    (void)jc;
    (void)physics;
    Log::print("3d joint entity tracked");
}
