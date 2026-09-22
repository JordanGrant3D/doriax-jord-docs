#include "testerScript.h"

#include "Body2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include "Contact2D.h"
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    body.createBoxShape(64.0f, 64.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    std::vector<Contact2D> contacts = body.getBodyContacts();
    Log::print("body contacts: %d", (int)contacts.size());
    if (body.getNumShapes() > 0) {
        std::vector<Contact2D> shapeContacts = body.getShapeContacts(0);
        Log::print("shape 0 contacts: %d", (int)shapeContacts.size());
    }
}
