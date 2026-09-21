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
    Object chassis(getScene(), getEntity());
    Body2D chassisBody = chassis.getBody2D();
    chassisBody.createBoxShape(2.5f, 0.6f);
    chassisBody.setType(BodyType::DYNAMIC);
    chassisBody.load();
    Object wheel(getScene());
    Body2D wheelBody = wheel.getBody2D();
    wheelBody.createCircleShape(Vector2(0.0f, 0.0f), 0.5f);
    wheelBody.setType(BodyType::DYNAMIC);
    wheelBody.load();
    Joint2D axle(getScene());
    axle.setWheelJoint(chassis.getEntity(), wheel.getEntity(), wheelBody.getPosition(), Vector2(0.0f, 1.0f));
}

void testerScript::onUpdate() {
    Joint2D axle(getScene(), getEntity());
    Log::print(suspension > 0.0f ? "buggy suspension active" : "buggy suspension locked");
}
