#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Zone Radius")
    float zoneRadius = 5.0f;

    doriax::Sphere zone;
    doriax::Sphere lastZone;

    void onViewLoaded();
    void onUpdate();
};
