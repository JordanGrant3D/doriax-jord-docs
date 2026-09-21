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
    Framebuffer minimapBuffer;
    Texture minimap(&minimapBuffer);
    Log::print(std::string("minimap outdated: ") + (minimap.isFramebufferOutdated() ? "yes" : "no"));
}
