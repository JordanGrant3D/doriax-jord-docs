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
    portrait.setTexture(portraitPath);
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    if (livePortrait) {
        Camera heroCam(getScene(), getScene()->getCamera());
        Framebuffer* feed = heroCam.getFramebuffer();
        if (feed != nullptr) {
            portrait.setTexture(feed);
            Log::print("portrait showing live feed");
            return;
        }
    }
    portrait.setTexture(portraitPath);
    Log::print(("portrait sprite: " + portraitPath).c_str());
}
