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

## [Texture](texture.md).wrapU

Horizontal wrapping mode for UVs outside `[0, 1]`. `REPEAT` tiles the CharacterController sprite sheet frames horizontally; `CLAMP_TO_EDGE` stops edge bleeding on single-sprite materials.

```cpp
void setWrapU(TextureWrap wrapU);
TextureWrap getWrapU() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-wrap-u.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-wrap-u.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
