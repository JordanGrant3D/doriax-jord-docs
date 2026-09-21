#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Floor Normal")
    doriax::Vector3 floorNormal = doriax::Vector3::UNIT_Y;

    doriax::Plane authored = doriax::Plane(doriax::Vector3::UNIT_Y, 0.0f);

    void onViewLoaded();
    void onUpdate();
};
