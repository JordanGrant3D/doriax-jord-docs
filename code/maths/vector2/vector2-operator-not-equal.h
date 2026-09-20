#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector2 lastMousePos = doriax::Vector2::ZERO;
    bool firstMouse = true;

    DPROPERTY("Mouse Sensitivity")
    float mouseSensitivity = 0.2f;

    DPROPERTY("Yaw")
    float camYaw = 0.0f;

    void onUpdate();
};
