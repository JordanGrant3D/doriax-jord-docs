#include "testerScript.h"

#include "Log.h"
#include "TextureData.h"
#include "Data.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Data filedata(spriteSheet.c_str());
    TextureData pixels;
    bool ok = pixels.loadTexture(&filedata);
    Log::print(std::string("sprite decoded: ") + (ok ? "yes" : "no"));
}
