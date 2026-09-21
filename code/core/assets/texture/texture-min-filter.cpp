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
    Texture sprite(spriteSheet);
    sprite.setMinFilter(TextureFilter::LINEAR_MIPMAP_LINEAR);
    Log::print("sprite min filter: " + std::to_string((int)sprite.getMinFilter()));
}
