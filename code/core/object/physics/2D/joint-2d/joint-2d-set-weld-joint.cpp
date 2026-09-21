#include "testerScript.h"

#include "Joint2D.h"
#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Input.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object limb(getScene(), getEntity());
    Body2D limbBody = limb.getBody2D();
    limbBody.createCapsuleShape(Vector2(-0.3f, 0.0f), Vector2(0.3f, 0.0f), 0.3f);
    limbBody.setType(BodyType::DYNAMIC);
    limbBody.load();
    Object plate(getScene());
    Body2D plateBody = plate.getBody2D();
    plateBody.createBoxShape(0.8f, 0.2f);
    plateBody.setType(BodyType::DYNAMIC);
    plateBody.load();
    Joint2D weld(getScene());
    weld.setWeldJoint(limb.getEntity(), plate.getEntity(), limbBody.getPosition());
}

void testerScript::onUpdate() {
    Joint2D weld(getScene(), getEntity());
    Log::print(plateMass > 0.0f ? "armor welded to ragdoll limb" : "armor missing");
}
