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
    portrait.setColor(teamColor);
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    portrait.setColor(teamColor);
    portrait.setColor(0.2f, 0.5f, 1.0f, portrait.getAlpha());
    Log::print(("portrait tint: " + portrait.getColor().toString()).c_str());
}
