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

    DPROPERTY("Walk Clip")
    int walkClip = 1;

    DPROPERTY("Fade Time")
    float fadeTime = 0.2f;
    void onViewLoaded();
};
