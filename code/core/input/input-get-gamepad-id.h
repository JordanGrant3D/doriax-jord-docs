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

    DPROPERTY("Gamepad Slot")
    int gamepadSlot = 0;

    DPROPERTY("Move Speed")
    float moveSpeed = 8.0f;

    void onViewLoaded();
    void onUpdate();
};
