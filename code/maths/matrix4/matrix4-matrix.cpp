#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    spawn = Matrix4::rotateYMatrix(yawDegrees);

    // Bulk-copy the raw entries into a plain float buffer for upload.
    float raw[16];
    for (int c = 0; c < 4; ++c)
        for (int r = 0; r < 4; ++r)
            raw[c * 4 + r] = spawn.matrix[c][r];

    Log::print(("m[0][0]: " + std::to_string(raw[0])).c_str());
}
