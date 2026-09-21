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

    DPROPERTY("Attack Button")
    int attackButton = D_MOUSE_BUTTON_LEFT;

    DPROPERTY("Attack Range")
    float attackRange = 3.0f;

    void onViewLoaded();
    void onUpdate();
};
