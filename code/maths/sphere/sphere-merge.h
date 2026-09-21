#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Waypoint")
    doriax::Vector3 waypoint = doriax::Vector3(10.0f, 0.0f, 6.0f);

    DPROPERTY("Waypoint Radius")
    float waypointRadius = 2.0f;

    doriax::Sphere patrol;

    void onViewLoaded();
    void onUpdate();
};
