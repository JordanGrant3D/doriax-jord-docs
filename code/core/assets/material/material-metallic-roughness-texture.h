#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Mesh.h"
#include "Material.h"
#include "Engine.h"
#include <string>

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Armor Mask Path")
    std::string armorMaskPath = "textures/hero_mask.png";

    void onViewLoaded();
    void onUpdate();
};
