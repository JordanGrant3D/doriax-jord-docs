#include "testerScript.h"
#include "Log.h"
#include "Framebuffer.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setPerspective(60.0f, 1.0f, 0.1f, 100.0f);
    chaseCam.setRenderToTexture(true);
    chaseCam.setFramebufferSize(mirrorSize, mirrorSize);
    chaseCam.setFramebufferFilter(TextureFilter::LINEAR);
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setRenderToTexture(mirrorEnabled);
    chaseCam.setFramebufferSize(mirrorSize, mirrorSize);
    chaseCam.setFramebufferFilter(TextureFilter::LINEAR);
    chaseCam.setPosition(anchor + Vector3(0.0f, 3.0f, -6.0f));
    chaseCam.setTarget(anchor);
    Framebuffer* mirror = chaseCam.getFramebuffer();
    if (mirror != nullptr && chaseCam.isRenderToTexture()) {
        Log::print("rear-view mirror rendering");
    } else {
        Log::print("rear-view mirror off");
    }
}
