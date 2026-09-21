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

## [TextureRender](texture-render.md).backend

Backend `SokolTexture` GPU object owned by this render handle. The engine fills it in during upload; gameplay code reads it through the `get*Handler()` accessors instead of touching it directly, e.g. when binding the minimap feed to a custom pass.

```cpp
SokolTexture backend;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-backend.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-backend.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
