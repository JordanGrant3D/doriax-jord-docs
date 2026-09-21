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
    unsigned char* blob = nullptr;
    unsigned int blobSize = 0;
    TextureData pixels;
    bool ok = pixels.loadTextureFromMemory(blob, blobSize);
    Log::print(std::string("memory sprite decoded: ") + (ok ? "yes" : "no"));
}
