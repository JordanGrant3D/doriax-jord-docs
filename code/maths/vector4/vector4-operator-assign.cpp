#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Vector copy-assign restores a tuned pose.
    blendWeights = savedPose;
}

void testerScript::onUpdate() {
    // Scalar-assign resets the whole set at once.
    Vector4 scratch;
    scratch = 0.0f;

    // Vector3-assign takes XYZ from a 3D reading (e.g. a velocity) and keeps W.
    Vector3 velocity(2.0f, 0.0f, 1.0f);
    Vector4 packed(0, 0, 0, 0.5f);
    packed = velocity;

    Log::print(("packed: " + packed.toString()).c_str());
    (void)scratch;
}
