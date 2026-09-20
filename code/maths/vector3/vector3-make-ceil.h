#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Max Bounds")
    doriax::Vector3 boundsMax = doriax::Vector3(10.0f, 10.0f, 10.0f);

    void onViewLoaded();
    void onUpdate();
};