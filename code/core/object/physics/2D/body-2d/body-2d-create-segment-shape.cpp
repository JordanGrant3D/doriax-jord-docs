#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "Vector2.h"

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
    int shapeIndex = body.createSegmentShape(Vector2(0.0f, 0.0f), Vector2(320.0f, 0.0f));
    body.setType(BodyType::STATIC);
    body.load();
    Log::print("ground segment created at index %d", shapeIndex);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Log::print(body.getNumShapes() > 0 ? "ground edge in place" : "ground missing shape");
}
