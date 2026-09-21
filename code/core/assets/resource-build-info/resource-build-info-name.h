#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "ResourceProgress.h"
#include <string>

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Row Asset Name")
    std::string rowAsset = "Hero_Run";

    DPROPERTY("Row Progress")
    float rowProgress = 0.5f;

    void onUpdate();
};
