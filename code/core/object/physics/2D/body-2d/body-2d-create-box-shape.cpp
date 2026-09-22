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
    int boxIndex = body.createBoxShape(64.0f, 64.0f);
    int centeredIndex = body.createCenteredBoxShape(48.0f, 48.0f);
    int offsetIndex = body.createCenteredBoxShape(32.0f, 32.0f, Vector2(80.0f, 0.0f), 0.0f);
    int roundedIndex = body.createRoundedBoxShape(56.0f, 56.0f, 8.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
    Log::print("box shapes created starting at index %d", boxIndex);
    (void)centeredIndex;
    (void)offsetIndex;
    (void)roundedIndex;
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Log::print(body.getNumShapes() == 4 ? "all box shapes active" : "box shapes missing");
}
