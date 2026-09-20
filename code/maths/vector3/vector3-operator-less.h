#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 minBounds = doriax::Vector3(-10.0f, 0.0f, -10.0f);
    doriax::Vector3 maxBounds = doriax::Vector3(10.0f, 10.0f, 10.0f);

    void onViewLoaded();
    void onUpdate();
};
