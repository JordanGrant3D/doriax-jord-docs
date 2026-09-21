#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "subsystem/PhysicsSystem.h"
#include "Joint2D.h"
#include "Body2D.h"

#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Target X")
    float targetX = 4.0f;

    DPROPERTY("Joint Entity")
    doriax::Entity jointEntity = 0;

    void onViewLoaded();
    void onUpdate();
};
