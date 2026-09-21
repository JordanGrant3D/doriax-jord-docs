#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"
#include "Animation.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Idle Clip")
    std::string idleClip = "Idle";

    DPROPERTY("Walk Clip")
    std::string walkClip = "Walk";

    DPROPERTY("Jump Clip")
    std::string jumpClip = "Jump";

    DPROPERTY("Fade Time")
    float fadeTime = 0.2f;

    float elapsed = 0.0f;
    bool walked = false;
    bool jumped = false;
    void onViewLoaded();
    void onUpdate();
};
