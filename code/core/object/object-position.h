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

    DPROPERTY("Spawn X")
    float spawnX = 100.0f;

    DPROPERTY("Spawn Y")
    float spawnY = 0.0f;

    DPROPERTY("Spawn Z")
    float spawnZ = -50.0f;
    void onViewLoaded();
    void onUpdate();
};
