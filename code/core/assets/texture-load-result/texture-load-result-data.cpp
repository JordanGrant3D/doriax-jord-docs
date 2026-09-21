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
    TextureLoadResult result = sprite.load();
    if (result.data != nullptr) {
        Log::print("loaded frame wide: " + std::to_string(result.data->at(0).getWidth()));
    }
}
