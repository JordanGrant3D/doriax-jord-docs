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
    sprite.setReleaseDataAfterLoad(false);
    Log::print(std::string("keep cpu pixels: ") + (sprite.isReleaseDataAfterLoad() ? "no" : "yes"));
}
