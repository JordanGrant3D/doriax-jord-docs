#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Sphere swing(obj.getPosition(), attackRange);
    Sphere enemy(enemyPosition, enemyRadius);

    if (swing.intersects(enemy)) {
        Log::print("swing connects with enemy");
    }
}
