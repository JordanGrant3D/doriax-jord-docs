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
    Object base(getScene());
    Body3D baseBody = base.getBody3D();
    baseBody.setType(BodyType::STATIC);
    baseBody.load();
    Object seat(getScene(), getEntity());
    Body3D seatBody = seat.getBody3D();
    seatBody.createBoxShape(1.0f, 0.2f, 1.0f);
    seatBody.setType(BodyType::DYNAMIC);
    seatBody.load();
    Joint3D rig(getScene());
    rig.setSixDOFJoint(base.getEntity(), seat.getEntity(), base.getPosition(), seat.getPosition(), Vector3::UNIT_X, Vector3::UNIT_Y);
}

void testerScript::onUpdate() {
    Joint3D rig(getScene(), getEntity());
    Log::print(boomLength > 0.0f ? "crane seat rigged" : "crane rig missing");
}
