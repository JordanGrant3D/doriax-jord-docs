#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);

}

testerScript::~testerScript() {

}

void testerScript::onViewLoaded() {
    // set p.y as 5.0f
    p[1] = 5.0f;
}

