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

## [TextureData](texture-data.md).getOriginalWidth()

Width before any `resize`/`crop`, so the loading screen can report progress against the source sprite sheet.

```cpp
int getOriginalWidth();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-original-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-original-width.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
