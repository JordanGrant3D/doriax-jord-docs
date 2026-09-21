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
    frame.setPatchMarginBottom(statusBarInset);
}

void testerScript::onUpdate() {
    Image frame(getScene(), getEntity());
    frame.setPatchMarginBottom(statusBarInset);
    Log::print(("status bar bottom inset: " + std::to_string(frame.getPatchMarginBottom())).c_str());
}
