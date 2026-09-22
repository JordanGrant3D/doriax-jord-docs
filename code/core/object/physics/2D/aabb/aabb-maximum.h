#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"
#include "AABB.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 maxCorner = doriax::Vector3(2.0f, 1.0f, 2.0f);
    doriax::AABB box;

    void onUpdate();
};
