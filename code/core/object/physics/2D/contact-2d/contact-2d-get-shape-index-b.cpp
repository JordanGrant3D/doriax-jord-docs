#include "testerScript.h"

#include "Body2D.h"
#include "Contact2D.h"
#include "Manifold2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"

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
    body.createBoxShape(1.0f, 2.0f);
    body.load();
    Log::print("character body ready");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    std::vector<Contact2D> contacts = body.getBodyContacts();
    for (Contact2D& contact : contacts) {
        if ((int)contact.getShapeIndexB() == groundShapeIndex) {
            Log::print("character on ground shape");
        } else {
            Log::print("character hit other shape");
        }
    }
    if (contacts.empty()) {
        Log::print("character airborne");
    }
}
