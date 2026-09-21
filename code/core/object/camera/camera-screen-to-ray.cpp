#include "testerScript.h"
#include "Log.h"
#include "Ray.h"
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
    chaseCam.setPerspective(60.0f, 1.333f, 0.1f, 500.0f);
    chaseCam.setTarget(0.0f, 1.5f, 0.0f);
    chaseCam.activate();
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setPosition(anchor + Vector3(0.0f, 3.0f, 6.0f));
    chaseCam.setTarget(anchor);
    chaseCam.updateCamera();
    Ray aim = chaseCam.screenToRay(pickX, pickY);
    Log::print(aim.getDirection().toString().c_str());
}
