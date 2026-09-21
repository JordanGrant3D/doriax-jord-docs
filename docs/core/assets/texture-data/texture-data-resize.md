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

## [TextureData](texture-data.md).resize()

Resamples the buffer to explicit dimensions, e.g. downscaling the CharacterController portrait for the minimap roster.

```cpp
void resize(int newWidth, int newHeight);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-resize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-resize.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
