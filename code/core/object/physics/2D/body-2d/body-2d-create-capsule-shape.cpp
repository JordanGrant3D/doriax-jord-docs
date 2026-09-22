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
    int shapeIndex = body.createCapsuleShape(Vector2(32.0f, 16.0f), Vector2(32.0f, 48.0f), 16.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
    Log::print("capsule shape created at index %d", shapeIndex);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Log::print(body.getNumShapes() > 0 ? "character capsule active" : "character missing shape");
}
