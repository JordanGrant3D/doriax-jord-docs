#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Sphere blast(Vector3::ZERO, blastRadius);

    // Damage density falls as the blast volume grows; SPACE re-logs the numbers.
    float density = baseDamage / blast.volume();

    if (Input::isKeyPressed(D_KEY_SPACE)) {
        Log::print(("blast density: " + std::to_string(density)).c_str());
    }
}
