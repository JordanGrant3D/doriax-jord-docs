---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).asyncLoading

Background resource loading. When active, GPU resource creation must be committed on the main thread via `commitThreadQueue`.

```cpp
static void setAsyncLoading(bool enable);
static bool isAsyncLoading();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-async-loading.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-async-loading.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
