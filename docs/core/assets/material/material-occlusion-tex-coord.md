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

## [Material](material.md).occlusionTexCoord

glTF texCoord index (UV set) sampled by `occlusionTexture`: `0` is primary, `1` is secondary. CharacterController keeps it on the primary set where the baked occlusion was authored.

```cpp
int occlusionTexCoord = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-occlusion-tex-coord.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-occlusion-tex-coord.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
