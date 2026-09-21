#include "testerScript.h"

#include "Log.h"
#include "Texture.h"
#include "TextureData.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Texture minimap;
    TextureRender* render = minimap.getRender();
    Log::print(std::string("vulkan image bound: ") + (render->getVulkanImageHandler() != nullptr ? "yes" : "no"));
}
