#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Rise Speed")
    float riseSpeed = 2.0f;

    doriax::Matrix4 platform;

    void onViewLoaded();
    void onUpdate();
};
