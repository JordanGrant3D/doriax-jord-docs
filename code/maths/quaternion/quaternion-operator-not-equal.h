#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Quaternion lastRotation = doriax::Quaternion::IDENTITY;

    void onViewLoaded();
    DPROPERTY("Log Changes")
    bool logChanges = true;

    void onUpdate();
};
