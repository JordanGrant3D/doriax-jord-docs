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
    std::array<TextureData, 6> faces;
    bool ok = TextureData::loadCubeMapFromSingleFile((skyFolder + "cross.png").c_str(), faces);
    Log::print(std::string("sky cross split: ") + (ok ? "yes" : "no"));
}
