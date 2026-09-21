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
    Object leafA(getScene(), getEntity());
    Body3D leafBody = leafA.getBody3D();
    leafBody.createBoxShape(0.15f, 2.0f, 1.0f);
    leafBody.setType(BodyType::DYNAMIC);
    leafBody.load();
    Joint3D hingeA(getScene());
    hingeA.setHingeJoint(frame.getEntity(), leafA.getEntity(), frame.getPosition(), Vector3::UNIT_Y, Vector3::UNIT_X);
    Joint3D gears(getScene());
    gears.setGearJoint(frame.getEntity(), leafA.getEntity(), hingeA.getEntity(), hingeA.getEntity(), 20, 40);
}

void testerScript::onUpdate() {
    Joint3D gears(getScene(), getEntity());
    Log::print(gearRatio > 1.0f ? "clockwork doors coupled" : "gearbox disengaged");
}
