#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Right")
    doriax::Vector3 right = doriax::Vector3(1.0f, 0.0f, 0.0f);

    DPROPERTY("Up")
    doriax::Vector3 up = doriax::Vector3(0.0f, 1.0f, 0.0f);

    DPROPERTY("Forward")
    doriax::Vector3 forward = doriax::Vector3(0.0f, 0.0f, 1.0f);

    void onUpdate();
};
