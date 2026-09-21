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
    Object shaft(getScene());
    Body3D shaftBody = shaft.getBody3D();
    shaftBody.setType(BodyType::STATIC);
    shaftBody.load();
    Object cabin(getScene(), getEntity());
    Body3D cabinBody = cabin.getBody3D();
    cabinBody.createBoxShape(2.0f, 0.3f, 2.0f);
    cabinBody.setType(BodyType::DYNAMIC);
    cabinBody.load();
    Joint3D piston(getScene());
    piston.setPrismaticJoint(shaft.getEntity(), cabin.getEntity(), Vector3::UNIT_Y, 0.0f, liftHeight);
}

void testerScript::onUpdate() {
    Object cabin(getScene(), getEntity());
    Vector3 pos = cabin.getPosition();
    Log::print(pos.y > liftHeight * 0.5f ? "elevator piston raised" : "elevator piston lowered");
}
