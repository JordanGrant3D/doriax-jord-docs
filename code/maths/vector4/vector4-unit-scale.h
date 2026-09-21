#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Tint")
    doriax::Vector4 tint = doriax::Vector4::UNIT_SCALE;

    void onViewLoaded();
    void onUpdate();
};
