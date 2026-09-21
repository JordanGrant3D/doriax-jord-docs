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
    TextureData pixels(spriteSheet.c_str());
    pixels.resizePowerOfTwo();
    Log::print("pot sprite: " + std::to_string(pixels.getWidth()));
}
