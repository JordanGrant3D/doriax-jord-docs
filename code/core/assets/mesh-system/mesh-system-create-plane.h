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

    DPROPERTY("Floor Width")
    float floorWidth = 8.0f;

    DPROPERTY("Floor Depth")
    float floorDepth = 8.0f;

    void onViewLoaded();
};
