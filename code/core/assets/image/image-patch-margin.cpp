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
    frame.setPatchMargin(frameBorder);
}

void testerScript::onUpdate() {
    Image frame(getScene(), getEntity());
    frame.setPatchMargin(frameBorder);
    frame.setPatchMargin(frameBorder, frameBorder, frameBorder / 2, frameBorder / 2);
    Log::print(("frame border: " + std::to_string(frameBorder)).c_str());
}
