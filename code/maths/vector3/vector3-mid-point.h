#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Waypoint")
    doriax::Vector3 waypoint = doriax::Vector3(10.0f, 0.0f, 0.0f);

    DPROPERTY("Move Speed")
    float moveSpeed = 1.0f;

    void onViewLoaded();
    void onUpdate();
};
