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

## [Material](material.md).baseColorTexCoord

glTF texCoord index (UV set) sampled by `baseColorTexture`: `0` is primary, `1` is secondary. CharacterController points the skin albedo at the secondary UV set when the mesh carries detail-mapping UVs.

```cpp
int baseColorTexCoord = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-base-color-tex-coord.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-base-color-tex-coord.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
