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

## [TextureData](texture-data.md).dataOwned

Whether this buffer owns (and frees) its pixel pointer. Clear it when the sprite-sheet pixels are borrowed from a loading-screen cache that outlives the handle.

```cpp
void setDataOwned(bool dataOwned);
bool getDataOwned() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-data-owned.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-data-owned.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
