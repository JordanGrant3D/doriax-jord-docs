#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector3 basePos = player.getPosition();
    double alpha = Engine::getInterpolationAlpha();
    Vector3 renderPos = basePos + Vector3(0.0f, static_cast<float>(alpha) * liftHeight, 0.0f);
    Log::print("render height offset: %f", renderPos.y - basePos.y);
}
