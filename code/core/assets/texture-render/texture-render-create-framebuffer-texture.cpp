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
    bool ok = render->createFramebufferTexture(TextureType::TEXTURE_2D, false, false,
        minimapSize, minimapSize, TextureFilter::LINEAR, TextureFilter::LINEAR,
        TextureWrap::CLAMP_TO_EDGE, TextureWrap::CLAMP_TO_EDGE);
    Log::print(std::string("minimap target ready: ") + (ok ? "yes" : "no"));
}
