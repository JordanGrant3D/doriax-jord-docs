#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.createBoxShape(64.0f, 64.0f);
    body.setType(BodyType::DYNAMIC);
    body.setShapeEnableHitEvents(true);
    body.setShapeContactEvents(true);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.setShapePreSolveEvents(0, true);
    body.setShapeSensorEvents(0, true);
    Log::print("shape 0 event delivery enabled");
}
