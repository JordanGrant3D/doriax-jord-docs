#include "testerScript.h"

#include "Log.h"
#include "TextureData.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    TextureData icon;
    icon.setSVGScale(4.0f);
    icon.loadTextureFromFile(iconPath.c_str());
    Log::print("icon svg scale: " + std::to_string(icon.getSVGScale()));
}
