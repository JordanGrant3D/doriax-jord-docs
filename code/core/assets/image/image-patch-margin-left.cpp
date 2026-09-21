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
    Image frame(getScene());
    frame.createImage();
    frame.setTexture("ui/portrait_frame.png");
    frame.setPatchMarginLeft(badgeInset);
}

void testerScript::onUpdate() {
    Image frame(getScene(), getEntity());
    frame.setPatchMarginLeft(badgeInset);
    Log::print(("badge left inset: " + std::to_string(frame.getPatchMarginLeft())).c_str());
}
