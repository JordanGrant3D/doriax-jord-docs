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
    float scale = 1.0f;
    std::string clean = TextureData::parseSvgScalePath(iconPath + "?svgScale=4", &scale);
    Log::print("icon path: " + clean + " scale: " + std::to_string(scale));
}
