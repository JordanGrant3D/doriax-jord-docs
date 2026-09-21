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
    TextureData banner(loadingImage.c_str());
    banner.fitSize(0, 0, 512, 128);
    Log::print("banner wide: " + std::to_string(banner.getWidth()));
}
