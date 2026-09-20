#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);

}

testerScript::~testerScript() {

}

void testerScript::onViewLoaded() {
    newPos = Vector3(0, 0, 0);
}


void testerScript::onUpdate() {
    if(Input::isKeyPressed(D_KEY_SPACE)) {
        newPos.x = xPos;
    }

    Object obj(getScene(), getEntity());

    obj.setPosition(newPos);
}