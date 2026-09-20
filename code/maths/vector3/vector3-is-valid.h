#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    void onViewLoaded();
    void onUpdate();
};
