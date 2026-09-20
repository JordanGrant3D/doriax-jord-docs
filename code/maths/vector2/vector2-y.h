#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Pitch")
    float camPitch = -30.0f;

    DPROPERTY("Mouse Sensitivity")
    float mouseSensitivity = 0.2f;

    void onUpdate();
};
