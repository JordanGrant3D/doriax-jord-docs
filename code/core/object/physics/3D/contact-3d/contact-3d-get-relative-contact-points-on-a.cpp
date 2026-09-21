#include "testerScript.h"

#include "Body3D.h"
#include "Contact3D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "subsystem/PhysicsSystem.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body3D body = obj.getBody3D();
    body.createCapsuleShape(0.9f, 0.3f);
    body.setType(BodyType::DYNAMIC);
    body.load();
    auto physics = getScene()->getSystem<PhysicsSystem>();
    REGISTER_EVENT(physics->onContactAdded3D, onLanded);
    Log::print("character contact listener ready");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body3D body = obj.getBody3D();
    body.setAngularVelocityClamped(Vector3::ZERO);
}

void testerScript::onLanded(Body3D self, Body3D other, Contact3D contact) {
    (void)self;
    (void)other;
    Vector3 point = contact.getRelativeContactPointsOnA(0);
    if (point.y < footHeight) {
        Log::print("character low foot impact");
    } else {
        Log::print("character high impact on A");
    }
}
