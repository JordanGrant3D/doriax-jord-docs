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
    Object platform(getScene(), getEntity());
    Body2D platformBody = platform.getBody2D();
    platformBody.createBoxShape(3.0f, 0.3f);
    platformBody.setType(BodyType::DYNAMIC);
    platformBody.load();
    Object anchor(getScene());
    anchor.setPosition(0.0f, 4.0f);
    Body2D anchorBody = anchor.getBody2D();
    anchorBody.setType(BodyType::STATIC);
    anchorBody.load();
    Joint2D joint(getScene());
    joint.setDistanceJoint(anchor.getEntity(), platform.getEntity());
}

void testerScript::onUpdate() {
    Joint2D joint(getScene(), getEntity());
    b2JointId native = joint.getBox2DJoint();
    (void)native;
    Log::print("swing platform joint created");
}
