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
    TextureData pixels;
    bool ok = pixels.loadTextureFromFile(spriteSheet.c_str());
    Log::print(std::string("sprite loaded: ") + (ok ? "yes" : "no"));
}
