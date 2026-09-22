#pragma once
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body2D.h"
#include "Input.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Spawn X")
    float spawnX = 0.0f;

    DPROPERTY("Spawn Y")
    float spawnY = 240.0f;

    DPROPERTY("Step Size")
    float stepSize = 4.0f;

    void onViewLoaded();
    void onFixedUpdate();
    void onUpdate();
};
