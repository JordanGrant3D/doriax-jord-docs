#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "MeshSystem.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Dome Radius")
    float domeRadius = 0.3f;

    DPROPERTY("Dome Slices")
    int domeSlices = 18;

    void onViewLoaded();
};
