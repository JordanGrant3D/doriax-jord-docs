#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Yaw Degrees")
    float yawDegrees = 45.0f;

    DPROPERTY("Tolerance")
    float tolerance = 1e-06f;

    void onUpdate();
};
