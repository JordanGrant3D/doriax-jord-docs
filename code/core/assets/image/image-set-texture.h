#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Image.h"
#include "Camera.h"
#include "Engine.h"
#include <string>

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Portrait Path")
    std::string portraitPath = "ui/portrait_hero.png";

    DPROPERTY("Live Portrait")
    bool livePortrait = false;

    void onViewLoaded();
    void onUpdate();
};
