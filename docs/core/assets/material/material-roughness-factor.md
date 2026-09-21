[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
