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

## [TextureData](texture-data.md).operator=(const TextureData& v)

Copies the full buffer (see `copy()`), so duplicated sprite-sheet frames stay independent.

```cpp
TextureData& operator = ( const TextureData& v );
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
