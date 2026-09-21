#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Saved Facing")
    doriax::Quaternion savedFacing;
    doriax::Quaternion workFacing;

    void onViewLoaded();
    void onUpdate();
};
