#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Zone Radius")
    float zoneRadius = 5.0f;

    DPROPERTY("Particles Per Unit")
    float particlesPerUnit = 2.0f;

    void onUpdate();
};
