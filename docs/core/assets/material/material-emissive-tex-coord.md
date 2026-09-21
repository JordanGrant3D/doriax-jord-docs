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

## [Material](material.md).emissiveTexCoord

glTF texCoord index (UV set) sampled by `emissiveTexture`: `0` is primary, `1` is secondary. CharacterController points the visor-glow map at the primary set so the damage flash lands on the visor.

```cpp
int emissiveTexCoord = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-emissive-tex-coord.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-emissive-tex-coord.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
