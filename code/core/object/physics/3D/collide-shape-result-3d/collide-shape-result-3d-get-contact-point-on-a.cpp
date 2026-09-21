#include "testerScript.h"

#include "Body3D.h"
#include "CollideShapeResult3D.h"
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
    REGISTER_EVENT(physics->shouldCollide3D, onShouldCollide);
    Log::print("character collide filter ready");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body3D body = obj.getBody3D();
    body.setAngularVelocityClamped(Vector3::ZERO);
}

bool testerScript::onShouldCollide(Body3D self, Body3D other, Vector3 baseOffset, CollideShapeResult3D result) {
    (void)self;
    (void)other;
    (void)baseOffset;
    Vector3 point = result.getContactPointOnA();
    if (point.y < impactHeight) {
        Log::print("character low impact predicted");
    } else {
        Log::print("character high impact predicted");
    }
    return true;
}
