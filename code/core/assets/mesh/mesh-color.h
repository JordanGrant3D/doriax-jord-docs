#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Mesh.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Outfit Tint R")
    float tintR = 1.0f;

    DPROPERTY("Outfit Tint B")
    float tintB = 0.2f;

    void onViewLoaded();
};
