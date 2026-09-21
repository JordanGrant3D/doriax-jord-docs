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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
