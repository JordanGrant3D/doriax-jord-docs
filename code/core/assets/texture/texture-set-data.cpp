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
    TextureData pixels;
    pixels.loadTextureFromFile(spriteSheet.c_str());
    Texture sprite;
    sprite.setData("hero", pixels);
    Log::print("sprite id: " + sprite.getId());
}
