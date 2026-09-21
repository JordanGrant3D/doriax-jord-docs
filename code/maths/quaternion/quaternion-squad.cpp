#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Four keyframed facings around the compass; squad glides through them.
    Quaternion p, a, b, q;
    p.fromAngleAxis(0.0f, Vector3::UNIT_Y);
    a.fromAngleAxis(90.0f, Vector3::UNIT_Y);
    b.fromAngleAxis(180.0f, Vector3::UNIT_Y);
    q.fromAngleAxis(270.0f, Vector3::UNIT_Y);

    blend += Engine::getDeltatime() * 0.2f;
    if (blend > 1.0f) blend = 0.0f;

    obj.setRotation(Quaternion::squad(blend, p, a, b, q));
    Log::print(("sweep: " + obj.getRotation().toString()).c_str());
}
