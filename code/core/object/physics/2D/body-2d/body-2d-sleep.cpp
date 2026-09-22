#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "Input.h"

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
    body.setEnableSleep(enableSleep);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.setEnableSleep(enableSleep);
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        body.setAwake(false);
    }
    if (Input::isKeyPressed(D_KEY_R)) {
        body.setAwake(true);
    }
    if (!body.isEnableSleep()) {
        Log::print("sleep disabled");
    } else {
        Log::print(body.isAwake() ? "body awake" : "body sleeping");
    }
}
