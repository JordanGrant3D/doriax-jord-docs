---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureRender](texture-render.md).getGLHandler()

OpenGL texture handle for native interop, e.g. sharing the minimap with a third-party map overlay on desktop GL builds.

```cpp
uint32_t getGLHandler() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-get-gl-handler.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-get-gl-handler.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
