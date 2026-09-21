#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "AABB.h"
#include "OBB.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Wall Position")
    doriax::Vector3 wallPosition = doriax::Vector3(5.0f, 0.0f, 0.0f);

    doriax::Plane wall = doriax::Plane(doriax::Vector3(-1.0f, 0.0f, 0.0f), 5.0f);

    void onUpdate();
};
