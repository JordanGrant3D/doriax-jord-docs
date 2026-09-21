#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "OBB.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Hurt Radius")
    float hurtRadius = 1.2f;

    DPROPERTY("Blade Center")
    doriax::Vector3 bladeCenter = doriax::Vector3(2.0f, 1.0f, 0.0f);

    DPROPERTY("Blade Half Extents")
    doriax::Vector3 bladeHalfExtents = doriax::Vector3(1.5f, 0.2f, 0.2f);

    void onUpdate();
};
