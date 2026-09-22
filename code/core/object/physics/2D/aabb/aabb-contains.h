#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "AABB.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Zone Min")
    doriax::Vector3 zoneMin = doriax::Vector3(-2.0f, -1.0f, -2.0f);

    DPROPERTY("Zone Max")
    doriax::Vector3 zoneMax = doriax::Vector3(2.0f, 1.0f, 2.0f);

    DPROPERTY("Inside Point")
    doriax::Vector3 insidePoint = doriax::Vector3(0.0f, 0.0f, 0.0f);

    DPROPERTY("Outside Point")
    doriax::Vector3 outsidePoint = doriax::Vector3(5.0f, 0.0f, 0.0f);

    DPROPERTY("Inner Min")
    doriax::Vector3 innerMin = doriax::Vector3(-1.0f, 0.0f, -1.0f);

    DPROPERTY("Inner Max")
    doriax::Vector3 innerMax = doriax::Vector3(1.0f, 1.0f, 1.0f);

    DPROPERTY("Overlap Min")
    doriax::Vector3 overlapMin = doriax::Vector3(1.0f, 0.0f, 1.0f);

    DPROPERTY("Overlap Max")
    doriax::Vector3 overlapMax = doriax::Vector3(4.0f, 1.0f, 4.0f);

    void onUpdate();
};
