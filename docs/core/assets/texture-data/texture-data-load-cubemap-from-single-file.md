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

## [TextureData](texture-data.md).loadCubeMapFromSingleFile()

Splits one cross-layout skybox image into six face buffers for the CharacterController reflection probe, avoiding six separate file opens on the loading screen.

```cpp
static bool loadCubeMapFromSingleFile(const char* filename, std::array<TextureData, 6>& data);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-load-cubemap-from-single-file.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-load-cubemap-from-single-file.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
