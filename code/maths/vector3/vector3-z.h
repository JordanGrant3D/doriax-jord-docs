#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "Input.h"
#include "ScriptProperty.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 newPos = doriax::Vector3::ZERO;

    DPROPERTY("New Z Pos")
    float zPos = 0;

    void onViewLoaded();
    void onUpdate();
};
