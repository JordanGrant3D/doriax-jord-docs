---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Log
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Log](log.md).debug(const char* fmt, ...)

Debug-build-only log: the body is compiled out entirely when `NDEBUG` is defined. Asserts development invariants (unit quaternions, finite positions) at zero release cost.

```cpp
static void debug(const char* fmt, ...);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/log/log-debug.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/log/log-debug.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
