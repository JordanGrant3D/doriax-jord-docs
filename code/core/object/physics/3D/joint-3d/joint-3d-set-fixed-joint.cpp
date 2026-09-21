#include "testerScript.h"

#include "Joint3D.h"
#include "Body3D.h"
#include "Object.h"
#include "Log.h"
#include "Input.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object torso(getScene(), getEntity());
    Body3D torsoBody = torso.getBody3D();
    torsoBody.createCapsuleShape(0.9f, 0.3f);
    torsoBody.setType(BodyType::DYNAMIC);
    torsoBody.load();
    Object helmet(getScene());
    Body3D helmetBody = helmet.getBody3D();
    helmetBody.createSphereShape(0.25f);
    helmetBody.setType(BodyType::DYNAMIC);
    helmetBody.load();
    Joint3D mount(getScene());
    mount.setFixedJoint(torso.getEntity(), helmet.getEntity());
}

void testerScript::onUpdate() {
    Joint3D mount(getScene(), getEntity());
    Log::print(helmetMass > 0.0f ? "helmet fixed to ragdoll torso" : "helmet missing");
}
