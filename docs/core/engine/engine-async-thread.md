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

## [Engine](engine.md).startAsyncThread() / commitThreadQueue() / endAsyncThread() / isAsyncThread()

Helpers for creating GPU resources from background threads: call `startAsyncThread()` at the beginning of the worker, `commitThreadQueue()` to flush pending GPU uploads on the main thread, and `endAsyncThread()` when finished (`AsyncThreadScope` wraps start/end automatically in C++). The example below shows the main-thread-safe queries.

```cpp
static void startAsyncThread();
static void commitThreadQueue();
static void endAsyncThread();
static bool isAsyncThread();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-async-thread.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-async-thread.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
