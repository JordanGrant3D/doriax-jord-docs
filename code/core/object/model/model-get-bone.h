#pragma once
#include <string>
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"
#include "Bone.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Bone Name")
    std::string boneName = "Head";

    DPROPERTY("Idle Clip")
    std::string idleClip = "Idle";
    void onViewLoaded();
    void onUpdate();
};
