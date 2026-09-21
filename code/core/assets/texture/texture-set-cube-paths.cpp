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
    Texture sky;
    sky.setCubePaths(skyFolder + "front.png", skyFolder + "back.png", skyFolder + "left.png",
                       skyFolder + "right.png", skyFolder + "up.png", skyFolder + "down.png");
    Log::print("sky faces: " + std::to_string(sky.getNumFaces()));
}
