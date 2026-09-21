#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Alt Yaw")
    float altYaw = 180.0f;

    doriax::Quaternion facing;
    doriax::Quaternion staged;

    void onViewLoaded();
    void onUpdate();
};
