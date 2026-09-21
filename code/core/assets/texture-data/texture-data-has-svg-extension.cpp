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
    bool isVector = TextureData::hasSvgExtension(iconPath.c_str());
    Log::print(std::string("icon is svg: ") + (isVector ? "yes" : "no"));
}
