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
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    b2BodyId nativeBody = body.getBox2DBody();
    (void)nativeBody;
    if (body.getNumShapes() > 0) {
        b2ShapeId nativeShape = body.getBox2DShape(0);
        b2ChainId nativeChain = body.getBox2DChain(0);
        (void)nativeShape;
        (void)nativeChain;
    }
    Log::print("native box2d handles ready");
}
