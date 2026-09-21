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
    Texture minimap;
    minimap.setWrapV(TextureWrap::CLAMP_TO_EDGE);
    Log::print("minimap wrapV: " + std::to_string((int)minimap.getWrapV()));
}
