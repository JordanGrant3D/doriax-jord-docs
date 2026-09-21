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

    DPROPERTY("Spawn X")
    float spawnX = 0.0f;

    DPROPERTY("Spawn Y")
    float spawnY = 5.0f;

    DPROPERTY("Needs Reload")
    bool needsReload = true;

    void onViewLoaded();
    void onUpdate();
};
