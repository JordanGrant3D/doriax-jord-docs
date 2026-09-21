#pragma once
#include <string>
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Save Slot")
    std::string saveSlot = "saves/tutorial_slot0.json";

    void onUpdate();
};
