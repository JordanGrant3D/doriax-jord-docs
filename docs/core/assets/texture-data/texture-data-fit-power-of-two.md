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

## [TextureData](texture-data.md).fitPowerOfTwo()

Pads (rather than resamples) the buffer out to power-of-two dimensions, preserving sprite-sheet texel sharpness for pixel-art frames.

```cpp
void fitPowerOfTwo();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-fit-power-of-two.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-fit-power-of-two.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
