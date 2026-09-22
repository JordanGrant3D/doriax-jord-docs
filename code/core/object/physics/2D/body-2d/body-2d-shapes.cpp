#include "testerScript.h"

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
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.createBoxShape(64.0f, 64.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    if (body.getNumShapes() > 0) {
        Shape2DType type = body.getShapeType(0);
        (void)type;
    }
    if (Input::isKeyPressed(D_KEY_R)) {
        body.removeAllShapes();
        body.createBoxShape(32.0f, 32.0f);
        body.load();
        Log::print("shapes rebuilt");
    } else {
        Log::print(body.getNumShapes() > 0 ? "shape list ready" : "body has no shapes");
    }
}
