#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Min Bounds")
    doriax::Vector3 boundsMin = doriax::Vector3(5.0f, 5.0f, 5.0f);

    void onViewLoaded();
    void onUpdate();
};
