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

## [Material](material.md).emissiveTexture

Emission [Texture](../texture/texture.md) whose RGB channels are multiplied with `emissiveFactor`. CharacterController assigns a visor-glow map so the damage flash only lights the helmet visor.

```cpp
Texture emissiveTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-emissive-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-emissive-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
