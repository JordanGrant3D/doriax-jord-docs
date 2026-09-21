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
    TextureData pixels(loadingImage.c_str());
    void* raw = pixels.getData();
    pixels.setDataOwned(false);
    TextureData::cleanupTexture(raw);
    Log::print("orphaned loading pixels freed");
}
