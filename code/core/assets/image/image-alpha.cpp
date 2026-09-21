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
    portrait.setAlpha(1.0f);
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    float pulse = 0.6f + 0.4f * portrait.getAlpha();
    portrait.setAlpha(pulse - flashSpeed * Engine::getDeltatime() * 0.1f);
    Log::print(("portrait alpha: " + std::to_string(portrait.getAlpha())).c_str());
}
