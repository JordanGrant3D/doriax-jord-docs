#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    float dt = Engine::getDeltatime();

    // Build a WASD move vector.
    Vector3 inputDir(0, 0, 0);
    if (Input::isKeyPressed(D_KEY_W)) inputDir = inputDir + Vector3(0, 0, -1);
    if (Input::isKeyPressed(D_KEY_S)) inputDir = inputDir + Vector3(0, 0, 1);
    if (Input::isKeyPressed(D_KEY_A)) inputDir = inputDir + Vector3(-1, 0, 0);
    if (Input::isKeyPressed(D_KEY_D)) inputDir = inputDir + Vector3(1, 0, 0);

    Vector3 pos = obj.getPosition();
    pos = pos + inputDir * (moveSpeed * dt);
    obj.setPosition(pos);
}
