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

## [Log](log.md).print(const char* fmt, ...)

General message log, always emitted. Announces CharacterController lifecycle events: state switches, arrivals, pickups.

```cpp
static void print(const char* fmt, ...);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/log/log-print.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/log/log-print.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
