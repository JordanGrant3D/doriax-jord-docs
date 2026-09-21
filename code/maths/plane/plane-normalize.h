#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Floor Normal")
    doriax::Vector3 floorNormal = doriax::Vector3(0.0f, 2.0f, 0.0f);

    doriax::Plane ground;

    void onUpdate();
};
