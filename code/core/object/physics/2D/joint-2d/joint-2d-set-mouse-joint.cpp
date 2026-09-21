#include "testerScript.h"

#include "Joint2D.h"
#include "Body2D.h"
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
    Object crate(getScene(), getEntity());
    Body2D crateBody = crate.getBody2D();
    crateBody.createBoxShape(1.0f, 1.0f);
    crateBody.setType(BodyType::DYNAMIC);
    crateBody.load();
    Object anchor(getScene());
    Body2D anchorBody = anchor.getBody2D();
    anchorBody.setType(BodyType::STATIC);
    anchorBody.load();
    Joint2D leash(getScene());
    leash.setMouseJoint(anchor.getEntity(), crate.getEntity(), crateBody.getPosition());
}

void testerScript::onUpdate() {
    Object crate(getScene(), getEntity());
    Body2D crateBody = crate.getBody2D();
    Joint2D leash(getScene(), getEntity());
    Vector2 target = crateBody.getPosition() + Vector2(dragStrength, 0.0f);
    leash.setMouseJoint(leash.getEntity(), crate.getEntity(), target);
    Log::print("dragging crate toward the character");
}
