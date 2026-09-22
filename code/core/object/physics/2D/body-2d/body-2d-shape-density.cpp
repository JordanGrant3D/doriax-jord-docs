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
    body.setShapeDensity(denseDensity);
    body.load();
    body.applyMassFromShapes();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    if (body.getShapeDensity() < denseDensity) {
        body.setShapeDensity(0, denseDensity);
        body.applyMassFromShapes();
        Log::print("shape 0 set to dense, mass recomputed");
    } else {
        Log::print("dense body falling");
    }
}
