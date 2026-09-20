#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);

}

testerScript::~testerScript() {

}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());

    obj.setPosition(Vector3::UNIT_X);
}