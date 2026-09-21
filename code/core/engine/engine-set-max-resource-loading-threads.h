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

    DPROPERTY("Worker Threads")
    int workerThreads = 2;

    DPROPERTY("Apply Threads")
    bool applyThreads = false;

    void onUpdate();
};
