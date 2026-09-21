#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Occluder2D.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Tripwire Mode")
    bool tripwireMode = false;

    DPROPERTY("Wall Entity")
    doriax::Entity wallEntity = 0;

    void onViewLoaded();
    void onUpdate();
};
