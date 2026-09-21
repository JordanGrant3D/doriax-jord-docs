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

## [TextureData](texture-data.md).releaseImageData()

Frees the CPU pixel bytes while keeping the descriptor (size, format) intact. Call it after the sprite sheet reaches the GPU to trim loading-screen memory.

```cpp
void releaseImageData();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-release-image-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-release-image-data.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
