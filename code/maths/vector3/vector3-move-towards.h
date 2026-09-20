#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Waypoint")
    doriax::Vector3 waypoint = doriax::Vector3(8.0f, 0.0f, 6.0f);

    DPROPERTY("Move Speed")
    float moveSpeed = 4.0f;

    void onUpdate();
};
