#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Mesh.h"
#include "Material.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Damage Flash")
    Vector3 damageFlash = Vector3(1.0f, 0.2f, 0.1f);

    void onViewLoaded();
    void onUpdate();
};
