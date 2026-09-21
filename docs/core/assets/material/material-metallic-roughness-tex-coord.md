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

## [Material](material.md).metallicRoughnessTexCoord

glTF texCoord index (UV set) sampled by `metallicRoughnessTexture`: `0` is primary, `1` is secondary. CharacterController aligns the armor mask with the same secondary UV set as the skin albedo.

```cpp
int metallicRoughnessTexCoord = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-metallic-roughness-tex-coord.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-metallic-roughness-tex-coord.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
