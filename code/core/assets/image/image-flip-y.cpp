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
    portrait.createImage();
    portrait.setTexture("ui/portrait_hero.png");
    portrait.setFlipY(flipPortrait);
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    portrait.setFlipY(flipPortrait);
    if (portrait.isFlipY()) {
        Log::print("portrait flipped upright");
    } else {
        Log::print("portrait flip off");
    }
}
