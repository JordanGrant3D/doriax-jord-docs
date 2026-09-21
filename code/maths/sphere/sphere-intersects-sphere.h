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

    DPROPERTY("Enemy Position")
    doriax::Vector3 enemyPosition = doriax::Vector3(2.0f, 0.0f, 0.0f);

    DPROPERTY("Enemy Radius")
    float enemyRadius = 1.0f;

    void onUpdate();
};
