#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ramp P0")
    doriax::Vector3 rampP0 = doriax::Vector3(0.0f, 0.0f, 0.0f);

    DPROPERTY("Ramp P1")
    doriax::Vector3 rampP1 = doriax::Vector3(4.0f, 0.0f, 0.0f);

    DPROPERTY("Ramp P2")
    doriax::Vector3 rampP2 = doriax::Vector3(0.0f, 2.0f, 3.0f);

    doriax::Plane ramp;

    void onUpdate();
};
