---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
