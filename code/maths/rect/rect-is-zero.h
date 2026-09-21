#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Panel")
    doriax::Rect panel = doriax::Rect(100.0f, 100.0f, 200.0f, 60.0f);

    void onViewLoaded();
    void onUpdate();
};
