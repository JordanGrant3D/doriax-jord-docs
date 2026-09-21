#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"
#include "Animation.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Idle Clip")
    int idleAnimation = 0;

    DPROPERTY("Walk Clip")
    int walkAnimation = 1;

    DPROPERTY("Jump Clip")
    int jumpAnimation = 2;

    DPROPERTY("Fade Time")
    float fadeTime = 0.25f;

    DPROPERTY("Desired State (0 idle, 1 walk, 2 jump, 3 waiting)")
    int desiredAnimState = 0;

    int currentState = -1;
    void onViewLoaded();
    void onUpdate();
};
