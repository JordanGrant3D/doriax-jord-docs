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
    TextureData b;
    b = a;
    Log::print("frame duplicated: " + std::to_string(b.getWidth()));
}
