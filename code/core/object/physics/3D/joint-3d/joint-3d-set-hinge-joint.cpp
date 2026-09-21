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
    Object frame(getScene());
    Body3D frameBody = frame.getBody3D();
    frameBody.setType(BodyType::STATIC);
    frameBody.load();
    Object door(getScene(), getEntity());
    Body3D doorBody = door.getBody3D();
    doorBody.createBoxShape(0.2f, 2.2f, 1.0f);
    doorBody.setType(BodyType::DYNAMIC);
    doorBody.load();
    Joint3D hinge(getScene());
    hinge.setHingeJoint(frame.getEntity(), door.getEntity(), frame.getPosition(), Vector3::UNIT_Y, Vector3::UNIT_X);
}

void testerScript::onUpdate() {
    Object door(getScene(), getEntity());
    Vector3 vel = door.getBody3D().getLinearVelocity();
    Log::print(vel.length() > doorSpeed ? "character pushing the door" : "door at rest");
}
