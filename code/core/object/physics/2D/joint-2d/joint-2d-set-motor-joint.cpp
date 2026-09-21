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
    Object track(getScene());
    Body2D trackBody = track.getBody2D();
    trackBody.setType(BodyType::STATIC);
    trackBody.load();
    Object deck(getScene(), getEntity());
    Body2D deckBody = deck.getBody2D();
    deckBody.createBoxShape(3.0f, 0.3f);
    deckBody.setType(BodyType::DYNAMIC);
    deckBody.load();
    Joint2D drive(getScene());
    drive.setMotorJoint(track.getEntity(), deck.getEntity());
}

void testerScript::onUpdate() {
    Object deck(getScene(), getEntity());
    Vector2 pos = deck.getBody2D().getPosition();
    Log::print(pos.x > 0.0f ? "patrol platform moving right" : "patrol platform moving left");
}
