#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Surface Normal")
    doriax::Vector3 surfaceNormal = doriax::Vector3(1.0f, 1.0f, 0.0f);

    void onViewLoaded();
    void onUpdate();
};
