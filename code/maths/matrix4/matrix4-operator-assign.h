#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Saved Spawn")
    doriax::Matrix4 savedSpawn;
    doriax::Matrix4 workSpawn;

    void onViewLoaded();
    void onUpdate();
};
