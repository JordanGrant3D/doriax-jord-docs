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

## [TextureData](texture-data.md).flipVertical()

Flips scanlines top-to-bottom to convert between file order and GPU order. Apply it to sprite sheets authored upside-down before uploading.

```cpp
void flipVertical();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-flip-vertical.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-flip-vertical.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
