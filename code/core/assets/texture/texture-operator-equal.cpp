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
    Texture a(spriteSheet);
    Texture b(spriteSheet);
    Log::print(std::string("same sprite: ") + (a == b ? "yes" : "no"));
}
