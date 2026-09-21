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

## [Material](material.md).occlusionTexture

Baked ambient-occlusion [Texture](../texture/texture.md): the red channel darkens crevices that receive less indirect light, at a fixed scale of `1.0`. CharacterController assigns it so armor seams stay shaded under any team tint.

```cpp
Texture occlusionTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-occlusion-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-occlusion-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
