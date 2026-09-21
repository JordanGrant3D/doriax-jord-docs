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
    portrait.setTexture("ui/hud_atlas.png");
    portrait.setTextureScaleFactor(atlasBleedGuard);
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    portrait.setTextureScaleFactor(atlasBleedGuard);
    Log::print(("atlas bleed guard: " + std::to_string(portrait.getTextureScaleFactor())).c_str());
}
