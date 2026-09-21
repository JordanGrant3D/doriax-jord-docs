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
    int stride = TextureData::getBytesPerChannel(ColorFormat::RED16);
    Log::print("red16 stride: " + std::to_string(stride));
}
