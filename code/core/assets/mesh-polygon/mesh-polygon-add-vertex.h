#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "MeshPolygon.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Badge Corner X")
    float cornerX = 0.2f;

    DPROPERTY("Badge Corner Y")
    float cornerY = 0.4f;

    void onViewLoaded();
};
