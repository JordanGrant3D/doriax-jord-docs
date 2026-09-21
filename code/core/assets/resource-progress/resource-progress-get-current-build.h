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

    DPROPERTY("Now Loading Prefix")
    std::string nowLoading = "Now loading";

    std::string lastSeen;

    void onUpdate();
};
