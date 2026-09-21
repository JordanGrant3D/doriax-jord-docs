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

## [TextureData](texture-data.md).copy()

Deep-copies pixel width, height, format, and image bytes from another buffer. Use it to snapshot a sprite-sheet frame before tinting the copy for the CharacterController damage flash.

```cpp
void copy(const TextureData& v);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-copy.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-copy.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
