#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();
    Vector3 p;

    void onViewLoaded();
};
