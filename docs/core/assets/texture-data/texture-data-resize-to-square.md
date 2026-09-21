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

## [TextureData](texture-data.md).resizeToSquare()

Resamples the buffer into a square, used for minimap tile thumbnails that must be NxN.

```cpp
void resizeToSquare();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-resize-to-square.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-resize-to-square.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
