#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();
    void onViewLoaded();
    void onUpdate();
private:
    doriax::Entity parentEntity = NULL_ENTITY;
    doriax::Entity childEntity = NULL_ENTITY;
    doriax::Entity overlayEntity = NULL_ENTITY;
    bool removed = false;
};
