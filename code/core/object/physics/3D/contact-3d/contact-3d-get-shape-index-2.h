#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body3D.h"
#include "Contact3D.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ground Shape Index")
    int groundShapeIndex = 0;
    void onViewLoaded();
    void onUpdate();
    void onLanded(doriax::Body3D self, doriax::Body3D other, doriax::Contact3D contact);
};
