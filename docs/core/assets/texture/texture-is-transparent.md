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

## [Texture](texture.md).isTransparent()

Returns `true` when any pixel has alpha below `1.0`. The engine uses this to route ghost-effect CharacterController sprites into the transparent pass.

```cpp
bool isTransparent() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-is-transparent.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-is-transparent.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
