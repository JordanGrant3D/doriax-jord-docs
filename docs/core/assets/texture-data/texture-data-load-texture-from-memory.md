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

## [TextureData](texture-data.md).loadTextureFromMemory()

Decodes a sprite from a memory blob, e.g. sprite-sheet bytes downloaded during a patch. The buffer must stay alive for the call duration.

```cpp
bool loadTextureFromMemory(unsigned char* data, unsigned int dataLength);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-load-texture-from-memory.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-load-texture-from-memory.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
