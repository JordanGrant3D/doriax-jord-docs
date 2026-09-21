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

## [Material](material.md).metallicRoughnessTexture

Packed [Texture](../texture/texture.md) following glTF 2.0: metallic in the blue channel (multiplied with `metallicFactor`), roughness in the green channel (multiplied with `roughnessFactor`). CharacterController assigns one mask so armor plates read metallic while joints stay rough.

```cpp
Texture metallicRoughnessTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-metallic-roughness-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-metallic-roughness-texture.h"
```
