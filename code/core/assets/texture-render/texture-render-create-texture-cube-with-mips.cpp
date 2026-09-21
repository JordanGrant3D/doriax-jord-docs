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
    Texture sky;
    sky.setCubeMap(skyFolder);
    TextureRender* render = sky.getRender();
    void* levels[1] = { nullptr };
    size_t sizes[1] = { 0 };
    bool ok = render->createTextureCubeWithMips("sky", 512, ColorFormat::RGBA, 1, levels, sizes,
        TextureFilter::LINEAR_MIPMAP_LINEAR, TextureFilter::LINEAR, TextureWrap::CLAMP_TO_EDGE, TextureWrap::CLAMP_TO_EDGE);
    Log::print(std::string("sky mips uploaded: ") + (ok ? "yes" : "no"));
}
