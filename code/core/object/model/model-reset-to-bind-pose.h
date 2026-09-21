#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Idle Clip")
    std::string idleClip = "Idle";

    float elapsed = 0.0f;
    bool restored = false;
    void onViewLoaded();
    void onUpdate();
};
