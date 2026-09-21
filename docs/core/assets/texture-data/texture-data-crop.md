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

## [TextureData](texture-data.md).crop()

Extracts a rectangle — one CharacterController walk frame — out of a sprite sheet for per-frame CPU sampling.

```cpp
void crop(int xOffset, int yOffset, int newWidth, int newHeight);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-crop.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-crop.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
