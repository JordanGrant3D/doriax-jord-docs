#include "testerScript.h"

#include "Log.h"
#include "Texture.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Texture coin(pixelSprite);
    coin.setMagFilter(TextureFilter::NEAREST);
    Log::print("coin mag filter: " + std::to_string((int)coin.getMagFilter()));
}
