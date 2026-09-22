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
    vertices.push_back(Vector2(160.0f, 32.0f));
    vertices.push_back(Vector2(320.0f, 0.0f));
    int shapeIndex = body.createChainShape(vertices, false);
    body.setType(BodyType::STATIC);
    body.load();
    Log::print("terrain chain created at index %d", shapeIndex);
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    Log::print(body.getNumShapes() > 0 ? "terrain chain in place" : "terrain missing shape");
}
