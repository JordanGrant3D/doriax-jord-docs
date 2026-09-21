#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Ease the walk channel out toward idle by subtracting a slice each frame.
    Vector4 target = Vector4::UNIT_X;
    Vector4 step = (blendWeights - target) * (fadeAmount * Engine::getDeltatime());
    blendWeights = blendWeights - step;

    // Scalar subtraction: dim every channel at once.
    Vector4 dimmed = blendWeights - 0.05f;

    // Unary minus: fully inverted weights, useful for difference masks.
    Vector4 inverted = -blendWeights;

    Log::print(("fading: " + blendWeights.toString()).c_str());
    (void)dimmed; (void)inverted;
}
