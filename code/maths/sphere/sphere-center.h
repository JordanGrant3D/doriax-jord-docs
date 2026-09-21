#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Attack Range")
    float attackRange = 3.0f;

    doriax::Sphere attackZone;

    void onViewLoaded();
    void onUpdate();
};
