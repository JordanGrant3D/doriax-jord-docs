#include "testerScript.h"

#include "Log.h"
#include "Texture.h"
#include "TextureData.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Texture minimap;
    TextureRender* render = minimap.getRender();
    if (render != nullptr) {
        Log::print(std::string("minimap uploaded: ") + (render->isCreated() ? "yes" : "no"));
    }
}
