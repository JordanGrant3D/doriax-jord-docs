#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"

#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Sight Range")
    float sightRange = 12.0f;

    void onViewLoaded();
    void onUpdate();
};
