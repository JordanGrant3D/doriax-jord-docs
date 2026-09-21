#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    facing = Matrix3::rotateYMatrix(yawDegrees);

    // Bulk-copy the raw entries into a plain float buffer for upload.
    float raw[9];
    for (int c = 0; c < 3; ++c)
        for (int r = 0; r < 3; ++r)
            raw[c * 3 + r] = facing.matrix[c][r];

    Log::print(("m[0][0]: " + std::to_string(raw[0])).c_str());
}
