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

## [Material](material.md).roughnessFactor

Roughness multiplier in `0.0`–`1.0`: `0.0` is mirror-glossy, `1.0` is fully diffuse. Multiplied with the green channel of `metallicRoughnessTexture`. CharacterController lowers it for wet/bloody damage looks and raises it for dusty outfits.

```cpp
float roughnessFactor = 1.0f;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-roughness-factor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-roughness-factor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
