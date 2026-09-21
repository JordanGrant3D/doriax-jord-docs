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

## [Material](material.md).alphaMode

Controls how combined alpha from `baseColorFactor.a` and `baseColorTexture` is rendered: `AUTO` preserves historical texture-alpha detection, `ALPHA_OPAQUE` ignores alpha, `MASK` discards fragments below `alphaCutoff`, `BLEND` keeps conventional transparency. CharacterController picks `MASK` for cutout capes and `BLEND` for ghost effects.

```cpp
MaterialAlphaMode alphaMode = MaterialAlphaMode::AUTO;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-alpha-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-alpha-mode.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
