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

## [TextureData](texture-data.md).getMinNearestPowerOfTwo()

Smallest power of two covering the buffer, used to size POT sprite-sheet atlases without overshooting.

```cpp
int getMinNearestPowerOfTwo();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-min-nearest-power-of-two.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-min-nearest-power-of-two.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
