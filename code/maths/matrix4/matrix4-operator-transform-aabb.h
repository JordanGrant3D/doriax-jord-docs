#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "AABB.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Platform Offset")
    doriax::Vector3 platformOffset = doriax::Vector3(0.0f, 2.0f, 0.0f);

    void onUpdate();
};
