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
    TextureData face;
    face.loadTextureFromFile((skyFolder + "front.png").c_str());
    Texture sky;
    sky.setCubeDatas("sky_day", face, face, face, face, face, face);
    Log::print("sky faces: " + std::to_string(sky.getNumFaces()));
}
