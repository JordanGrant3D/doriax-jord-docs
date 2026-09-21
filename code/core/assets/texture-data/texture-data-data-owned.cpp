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
    pixels.setDataOwned(true);
    Log::print(std::string("pixels owned: ") + (pixels.getDataOwned() ? "yes" : "no"));
}
