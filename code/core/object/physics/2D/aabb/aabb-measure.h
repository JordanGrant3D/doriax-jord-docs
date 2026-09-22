#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "AABB.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Crate Min")
    doriax::Vector3 crateMin = doriax::Vector3(-2.0f, -1.0f, -2.0f);

    DPROPERTY("Crate Max")
    doriax::Vector3 crateMax = doriax::Vector3(2.0f, 1.0f, 2.0f);

    void onUpdate();
};
