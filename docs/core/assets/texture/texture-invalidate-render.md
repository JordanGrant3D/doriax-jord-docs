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

## [Texture](texture.md).invalidateRender()

Drops the cached GPU handle so the next render re-uploads the sprite. Used after a graphics-context loss to restore CharacterController visuals without rebuilding every handle.

```cpp
void invalidateRender();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-invalidate-render.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-invalidate-render.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
