[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).renderToTexture

Enables off-screen rendering to the camera's internal framebuffer instead of the main surface. Size it with `setFramebufferSize`, pick a filter with `setFramebufferFilter`, and read the result with `getFramebuffer` — for example a chase-cam rear-view mirror.

```cpp
void setRenderToTexture(bool renderToTexture);
bool isRenderToTexture() const;
Framebuffer* getFramebuffer();
void setFramebufferSize(int width, int height);
void setFramebufferFilter(TextureFilter filter);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-render-to-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-render-to-texture.h"
```
