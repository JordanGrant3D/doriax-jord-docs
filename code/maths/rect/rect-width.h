#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Health Bar")
    doriax::Rect healthBar = doriax::Rect(20.0f, 20.0f, 200.0f, 24.0f);

    DPROPERTY("Health")
    float health = 1.0f;

    void onUpdate();
};
