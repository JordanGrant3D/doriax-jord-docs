#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Pickup Radius")
    float pickupRadius = 2.5f;

    DPROPERTY("Coin Position")
    doriax::Vector3 coinPosition = doriax::Vector3(3.0f, 1.0f, 0.0f);

    doriax::Sphere magnet;

    void onViewLoaded();
    void onUpdate();
};
