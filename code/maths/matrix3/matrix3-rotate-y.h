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

    DPROPERTY("Turn Speed")
    float turnSpeed = 180.0f;

    DPROPERTY("Yaw Degrees")
    float yawDegrees = 0.0f;

    void onUpdate();
};
