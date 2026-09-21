#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Model File")
    std::string modelFile = "characters/hero.glb";

    DPROPERTY("Idle Clip")
    int idleClip = 0;
    void onViewLoaded();
};
