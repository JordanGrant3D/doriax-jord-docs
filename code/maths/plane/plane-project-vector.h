#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Move Speed")
    float moveSpeed = 8.0f;

    doriax::Plane ramp = doriax::Plane(doriax::Vector3(0.0f, 0.7f, 0.7f).normalized(), 0.0f);

    void onUpdate();
};
