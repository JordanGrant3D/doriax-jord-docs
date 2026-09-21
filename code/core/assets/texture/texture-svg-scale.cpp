#include "testerScript.h"

#include "Log.h"
#include "Texture.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Texture icon(iconPath);
    icon.setSvgScale(4.0f);
    Log::print("icon svg scale: " + std::to_string(icon.getSvgScale()));
}
