#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ceiling")
    doriax::Vector3 ceiling = doriax::Vector3(1.0f, 5.0f, 1.0f);

    void onViewLoaded();
    void onUpdate();
};
