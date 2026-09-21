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
    Texture sprite(spriteSheet);
    TextureRender* render = sprite.getRender();
    TextureData& pixels = sprite.getData();
    void* faces[6] = { pixels.getData(), nullptr, nullptr, nullptr, nullptr, nullptr };
    size_t sizes[6] = { pixels.getSize(), 0, 0, 0, 0, 0 };
    bool ok = render->createTexture("hero", pixels.getWidth(), pixels.getHeight(),
        ColorFormat::RGBA, TextureType::TEXTURE_2D, 1, faces, sizes,
        TextureFilter::LINEAR, TextureFilter::LINEAR, TextureWrap::REPEAT, TextureWrap::REPEAT);
    Log::print(std::string("skin uploaded: ") + (ok ? "yes" : "no"));
}
