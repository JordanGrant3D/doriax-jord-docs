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

    DPROPERTY("Log Interval")
    float logInterval = 5.0f;
    double lastLogTime = 0.0;


    void onUpdate();
};
