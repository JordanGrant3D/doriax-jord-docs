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

## [TextureData](texture-data.md).cleanupTexture()

Render-callback-compatible deleter that frees pixel memory handed to the GPU upload queue. Wire it as the cleanup for orphaned loading-screen sprite bytes.

```cpp
static void cleanupTexture(void* data);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-cleanup-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-cleanup-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
