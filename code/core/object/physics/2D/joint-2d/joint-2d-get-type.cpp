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
    Object anchor(getScene());
    Body2D anchorBody = anchor.getBody2D();
    anchorBody.setType(BodyType::STATIC);
    anchorBody.load();
    Object deck(getScene(), getEntity());
    Body2D deckBody = deck.getBody2D();
    deckBody.createBoxShape(3.0f, 0.3f);
    deckBody.setType(BodyType::DYNAMIC);
    deckBody.load();
    Joint2D joint(getScene());
    joint.setRevoluteJoint(anchor.getEntity(), deck.getEntity(), anchorBody.getPosition());
}

void testerScript::onUpdate() {
    Joint2D joint(getScene(), getEntity());
    Joint2DType type = joint.getType();
    Log::print(type == Joint2DType::REVOLUTE ? "swing platform uses a revolute joint" : "joint type changed");
}
