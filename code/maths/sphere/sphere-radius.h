#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Aggro Radius")
    float aggroRadius = 12.0f;

    doriax::Sphere aggroZone;

    void onViewLoaded();
    void onUpdate();
};
