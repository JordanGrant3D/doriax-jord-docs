#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"
#include "Input.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Move Speed")
    float moveSpeed = 8.0f;

    DPROPERTY("Sprint Multiplier")
    float sprintMultiplier = 1.8f;

    void onViewLoaded();
    void onUpdate();
};
