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
    Log::print(std::string("sprite has gpu render: ") + (render != nullptr ? "yes" : "no"));
}
