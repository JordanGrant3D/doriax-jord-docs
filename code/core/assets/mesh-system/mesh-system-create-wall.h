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

    DPROPERTY("Wall Width")
    float wallWidth = 6.0f;

    DPROPERTY("Wall Height")
    float wallHeight = 3.0f;

    void onViewLoaded();
};
