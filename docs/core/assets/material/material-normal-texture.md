---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Material](material.md).normalTexture

Tangent-space normal map [Texture](../texture/texture.md) perturbing the surface normal per pixel for fine detail without extra polygons. CharacterController assigns it for fabric weave on the hero outfit.

```cpp
Texture normalTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-normal-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-normal-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
