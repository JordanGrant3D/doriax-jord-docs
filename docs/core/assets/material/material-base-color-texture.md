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

## [Material](material.md).baseColorTexture

Albedo [Texture](../texture/texture.md) whose RGBA channels are multiplied with `baseColorFactor`. CharacterController swaps it to change the hero skin while keeping the team tint in `baseColorFactor`.

```cpp
Texture baseColorTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-base-color-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-base-color-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
