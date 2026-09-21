---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).releaseDataAfterLoad

Frees CPU-side pixel data once the texture reaches the GPU (`true` by default). Textures built from a [TextureData](../texture-data/texture-data.md) keep their pixels: the `Texture(id, data)` constructor, `setData`, and `setCubeDatas` all clear this flag. Keep it `false` while a loading screen samples sprite-sheet pixels on the CPU.

```cpp
void setReleaseDataAfterLoad(bool releaseDataAfterLoad);
bool isReleaseDataAfterLoad() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-release-data-after-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-release-data-after-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
