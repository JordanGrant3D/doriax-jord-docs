#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Yaw Degrees")
    float yawDegrees = 45.0f;

    DPROPERTY("Spawn")
    doriax::Vector3 spawn = doriax::Vector3(10.0f, 0.0f, 6.0f);

    void onUpdate();
};
