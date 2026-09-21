#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "ResourceProgress.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Kind Index (0 shader, 1 texture, 2 model, 3 sound)")
    int kindIndex = 1;

    void onViewLoaded();
};
