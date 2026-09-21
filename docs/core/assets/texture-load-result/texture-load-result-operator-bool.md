---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureLoadResult](texture-load-result.md).operator bool()

Explicit conversion returning `true` only when `state` is `Finished`. Gate sprite-sheet use on this so failed loading-screen assets fall back to the placeholder icon.

```cpp
explicit operator bool() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-operator-bool.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-operator-bool.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
