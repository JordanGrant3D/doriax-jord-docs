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
    Texture a;
    TextureRender* render = a.getRender();
    TextureRender alias;
    alias = *render;
    Log::print(std::string("minimap render aliased: ") + (alias.isCreated() ? "yes" : "no"));
}
