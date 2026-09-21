#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "subsystem/PhysicsSystem.h"

#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("World Gravity Y")
    float worldGravityY = -9.81f;

    DPROPERTY("Show Gravity")
    bool showGravity = true;

    void onViewLoaded();
    void onUpdate();
};
