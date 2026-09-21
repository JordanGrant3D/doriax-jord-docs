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

## [TextureLoadResult](texture-load-result.md).state

Terminal loader state (`Finished`, `Failed`, `Loading`, `NotStarted`). The loading screen polls this to advance the progress bar.

```cpp
ResourceLoadState state = ResourceLoadState::NotStarted;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-state.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-state.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
