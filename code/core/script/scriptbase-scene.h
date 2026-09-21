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

    DPROPERTY("Is Active")
    bool isActive = true;

    DPROPERTY("Move Speed")
    float moveSpeed = 5.0f;

    void onViewLoaded();
    void onUpdate();
};
