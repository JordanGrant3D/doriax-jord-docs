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
    Image portrait(getScene());
    portrait.setTexture(portraitPath);
    if (portrait.createImage()) {
        Log::print("portrait geometry ready");
    }
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    if (portrait.createImage()) {
        Log::print("portrait geometry rebuilt");
    } else {
        Log::print("portrait geometry pending");
    }
}
