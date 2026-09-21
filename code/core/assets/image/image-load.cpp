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
    portrait.load();
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    portrait.setTexture(portraitPath);
    if (portrait.load()) {
        Log::print(("portrait uploaded: " + portraitPath).c_str());
    } else {
        Log::print("portrait upload failed");
    }
}
