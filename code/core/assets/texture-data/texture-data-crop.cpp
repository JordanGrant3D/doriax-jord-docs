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
    TextureData sheet(spriteSheet.c_str());
    sheet.crop(walkFrame * 64, 0, 64, 64);
    Log::print("walk frame wide: " + std::to_string(sheet.getWidth()));
}
