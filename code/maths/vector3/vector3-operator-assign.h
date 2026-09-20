#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Target")
    doriax::Vector3 target = doriax::Vector3(4.0f, 2.0f, -3.0f);

    void onViewLoaded();
};
