---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).isFramebufferOutdated()

Returns `true` when the render target was resized or recreated since this texture last bound it, telling the minimap pass to rebind before sampling.

```cpp
bool isFramebufferOutdated() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-is-framebuffer-outdated.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-is-framebuffer-outdated.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
