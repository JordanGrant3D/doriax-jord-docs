#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 lastPos = doriax::Vector3::ZERO;
    int moveCount = 0;

    void onViewLoaded();
    void onUpdate();
};
