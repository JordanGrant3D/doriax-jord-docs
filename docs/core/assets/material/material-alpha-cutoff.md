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

## [Material](material.md).alphaCutoff

Alpha threshold used only by `MaterialAlphaMode::MASK`: fragments whose combined alpha falls below it are discarded. CharacterController tunes it for cutout foliage on ghillie-suit looks.

```cpp
float alphaCutoff = 0.5f;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-alpha-cutoff.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-alpha-cutoff.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
