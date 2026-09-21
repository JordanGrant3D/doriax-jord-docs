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

## [TextureData](texture-data.md).loadTextureFromFile()

Loads and decodes a sprite file from disk in one call. This is the usual way loading screens pull in CharacterController sprite sheets.

```cpp
bool loadTextureFromFile(const char* filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-load-texture-from-file.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-load-texture-from-file.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
