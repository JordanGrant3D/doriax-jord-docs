#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "Vector2.h"
#include <vector>

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
    std::vector<Vector2> vertices;
    vertices.push_back(Vector2(0.0f, 0.0f));
    vertices.push_back(Vector2(64.0f, 0.0f));
    vertices.push_back(Vector2(32.0f, 48.0f));
    int shapeIndex = body.createPolygonShape(vertices);
    body.setType(BodyType::DYNAMIC);
    body.load();
    Log::print("polygon shape created at index %d", shapeIndex);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Log::print(body.getNumShapes() > 0 ? "polygon body active" : "polygon body missing shapes");
}
