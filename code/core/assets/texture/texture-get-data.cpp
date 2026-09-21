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
    sprite.load();
    if (sprite.hasData()) {
        TextureData& pixels = sprite.getData();
        Log::print("sprite pixels wide: " + std::to_string(pixels.getWidth()));
    }
}
