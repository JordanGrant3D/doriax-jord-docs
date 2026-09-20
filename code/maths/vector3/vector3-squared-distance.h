#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 waypoint = doriax::Vector3(6.0f, 0.0f, 0.0f);
    float arriveRadius = 1.5f;

    void onViewLoaded();
    void onUpdate();
};
