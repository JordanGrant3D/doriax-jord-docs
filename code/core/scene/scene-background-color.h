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

    DPROPERTY("Clear Red")
    float clearRed = 0.05f;

    DPROPERTY("Clear Green")
    float clearGreen = 0.05f;

    DPROPERTY("Clear Blue")
    float clearBlue = 0.1f;

    void onViewLoaded();
    void onUpdate();
};
