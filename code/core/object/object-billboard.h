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

    DPROPERTY("Fake Billboard")
    bool fake = false;

    DPROPERTY("Cylindrical Billboard")
    bool cylindrical = false;

    void onViewLoaded();
    void onUpdate();
};
