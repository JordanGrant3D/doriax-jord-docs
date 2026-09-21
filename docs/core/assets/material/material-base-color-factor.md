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

## [Material](material.md).baseColorFactor

Linear-space RGBA colour multiplied component-wise with `baseColorTexture`. With no texture it is the solid surface colour. CharacterController tints it per team (`blue` vs `red`) before calling `Mesh::setMaterial`.

```cpp
Vector4 baseColorFactor = Vector4(1.0f, 1.0f, 1.0f, 1.0f);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-base-color-factor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-base-color-factor.h"
```
