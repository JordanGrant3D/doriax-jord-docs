#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Spin Rate")
    doriax::Vector3 spinRate = doriax::Vector3(0.0f, 1.0f, 0.0f);

    doriax::Quaternion facing = doriax::Quaternion::IDENTITY;

    void onViewLoaded();
    void onUpdate();
};
