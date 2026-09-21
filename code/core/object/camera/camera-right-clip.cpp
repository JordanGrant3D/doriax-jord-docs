#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setOrtho(0.0f, 800.0f, 0.0f, 600.0f, -100.0f, 100.0f);
    chaseCam.activate();
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setRightClip(rightClip);
    chaseCam.setPosition(anchor + Vector3(0.0f, followHeight, 10.0f));
    chaseCam.setTarget(anchor);
    Log::print(std::to_string(chaseCam.getRightClip()).c_str());
}
