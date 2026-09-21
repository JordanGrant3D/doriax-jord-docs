---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureData](texture-data.md).resizePowerOfTwo()

Resamples the buffer up to the nearest power-of-two dimensions for GPUs that require POT sprite sheets.

```cpp
void resizePowerOfTwo();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-resize-power-of-two.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-resize-power-of-two.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
