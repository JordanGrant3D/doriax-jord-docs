[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Material](material.md).emissiveFactor

Additive linear-space RGB glow emitted independent of lighting, multiplied with `emissiveTexture` when present. Keep it at `(0, 0, 0)` to disable emission. CharacterController flashes it red on damage and fades it back to black.

```cpp
Vector3 emissiveFactor = Vector3(0.0f, 0.0f, 0.0f);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-emissive-factor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-emissive-factor.h"
```
