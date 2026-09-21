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

## [Material](material.md).normalTexCoord

glTF texCoord index (UV set) sampled by `normalTexture`: `0` is primary, `1` is secondary. CharacterController points the fabric normal map at the secondary set with the rest of the detail maps.

```cpp
int normalTexCoord = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-normal-tex-coord.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-normal-tex-coord.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
