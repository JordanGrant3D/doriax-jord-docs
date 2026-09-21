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
