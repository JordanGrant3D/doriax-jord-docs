#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setOrtho(0.0f, orthoWidth, 0.0f, orthoHeight, -100.0f, 100.0f);
    chaseCam.activate();
    Log::print("ortho chase camera ready");
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setOrtho(anchor.x - orthoWidth * 0.5f, anchor.x + orthoWidth * 0.5f, anchor.y - orthoHeight * 0.5f, anchor.y + orthoHeight * 0.5f, -100.0f, 100.0f);
    chaseCam.setPosition(anchor + Vector3(0.0f, 0.0f, 10.0f));
    chaseCam.setTarget(anchor);
    Log::print("ortho chase camera tracking");
}
