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

    DPROPERTY("Replay Path")
    std::string replayPath = "replays/tutorial_run0.bin";

    void onUpdate();
};
