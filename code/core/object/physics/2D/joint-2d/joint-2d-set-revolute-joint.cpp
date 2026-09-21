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
    Object frame(getScene());
    frame.setPosition(-2.0f, 1.0f);
    Body2D frameBody = frame.getBody2D();
    frameBody.setType(BodyType::STATIC);
    frameBody.load();
    Object door(getScene(), getEntity());
    Body2D doorBody = door.getBody2D();
    doorBody.createBoxShape(0.2f, 2.0f);
    doorBody.setType(BodyType::DYNAMIC);
    doorBody.load();
    Joint2D hinge(getScene());
    hinge.setRevoluteJoint(frame.getEntity(), door.getEntity(), Vector2(-2.0f, 2.0f));
}

void testerScript::onUpdate() {
    Object door(getScene(), getEntity());
    Body2D doorBody = door.getBody2D();
    Log::print(doorAngle > 0.5f ? "door swinging open" : "door shut");
}
