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
    body.setShapePreSolveEvents(true);
    body.setShapeSensorEvents(true);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    bool loud = body.isShapeEnableHitEvents() && body.isShapeEnableHitEvents(0);
    bool tracked = body.isShapeContactEvents() && body.isShapeContactEvents(0);
    bool solving = body.isShapePreSolveEvents() && body.isShapePreSolveEvents(0);
    bool sensing = body.isShapeSensorEvents() && body.isShapeSensorEvents(0);
    Log::print(loud && tracked && solving && sensing ? "shape 0 reports all events" : "shape 0 events muted");
}
