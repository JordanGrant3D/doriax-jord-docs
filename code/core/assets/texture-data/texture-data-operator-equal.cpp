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
    TextureData a(spriteSheet.c_str());
    TextureData b(spriteSheet.c_str());
    Log::print(std::string("frames identical: ") + (a == b ? "yes" : "no"));
}
