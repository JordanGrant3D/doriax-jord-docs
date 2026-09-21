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
    Object rail(getScene());
    rail.setPosition(0.0f, 0.0f);
    Body2D railBody = rail.getBody2D();
    railBody.setType(BodyType::STATIC);
    railBody.load();
    Object cabin(getScene(), getEntity());
    Body2D cabinBody = cabin.getBody2D();
    cabinBody.createBoxShape(2.0f, 0.3f);
    cabinBody.setType(BodyType::DYNAMIC);
    cabinBody.load();
    Joint2D slider(getScene());
    slider.setPrismaticJoint(rail.getEntity(), cabin.getEntity(), Vector2(0.0f, 0.0f), Vector2(0.0f, 1.0f));
}

void testerScript::onUpdate() {
    Object cabin(getScene(), getEntity());
    Vector2 pos = cabin.getBody2D().getPosition();
    Log::print(pos.y > 1.0f ? "elevator carrying the character up" : "elevator at ground level");
}
