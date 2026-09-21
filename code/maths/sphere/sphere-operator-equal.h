#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Target Radius")
    float targetRadius = 6.0f;

    doriax::Sphere zone;
    doriax::Sphere target;

    void onViewLoaded();
    void onUpdate();
};
