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

    DPROPERTY("Extra Spins")
    int extraSpins = 2;

    DPROPERTY("Blend")
    float blend = 0.0f;

    doriax::Quaternion startPose;

    void onViewLoaded();
    void onUpdate();
};
