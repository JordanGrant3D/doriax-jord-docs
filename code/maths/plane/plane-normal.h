#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ground Normal")
    doriax::Vector3 groundNormal = doriax::Vector3::UNIT_Y;

    doriax::Plane ground;

    void onViewLoaded();
    void onUpdate();
};
