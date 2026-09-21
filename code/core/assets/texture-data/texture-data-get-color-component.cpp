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
    unsigned char alpha = pixels.getColorComponent(10, 20, 3);
    Log::print("sampled alpha: " + std::to_string((int)alpha));
}
