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
    Object gate(getScene(), getEntity());
    Body3D gateBody = gate.getBody3D();
    gateBody.createBoxShape(2.0f, 3.0f, 0.2f);
    gateBody.setType(BodyType::DYNAMIC);
    gateBody.load();
    Joint3D crank(getScene());
    crank.setHingeJoint(frame.getEntity(), gate.getEntity(), frame.getPosition(), Vector3::UNIT_X, Vector3::UNIT_Y);
    Joint3D rack(getScene());
    rack.setPrismaticJoint(frame.getEntity(), gate.getEntity(), Vector3::UNIT_Y, 0.0f, gateHeight);
    Joint3D hoist(getScene());
    hoist.setRackAndPinionJoint(frame.getEntity(), gate.getEntity(), crank.getEntity(), rack.getEntity(), 20, 20, 100);
}

void testerScript::onUpdate() {
    Joint3D hoist(getScene(), getEntity());
    Log::print(gateHeight > 0.0f ? "portcullis cranked open" : "portcullis shut");
}
