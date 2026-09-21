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

## [Material](material.md).metallicFactor

Metalness multiplier in `0.0`–`1.0`: `1.0` is fully metallic like polished steel, `0.0` is dielectric like cloth. Multiplied with the blue channel of `metallicRoughnessTexture`. CharacterController raises it for armored looks and lowers it for cloth outfits.

```cpp
float metallicFactor = 1.0f;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-metallic-factor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-metallic-factor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
