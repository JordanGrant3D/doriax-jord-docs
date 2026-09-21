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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
