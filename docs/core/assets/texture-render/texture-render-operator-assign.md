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

## [TextureRender](texture-render.md).operator=(const TextureRender& rhs)

Shares the backend GPU allocation (minimap feed) with another handle instead of re-uploading.

```cpp
TextureRender& operator=(const TextureRender& rhs);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
