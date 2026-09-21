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

## [Log](log.md).verbose(const char* fmt, ...)

Verbose telemetry log for per-frame values (heights, yaw, deflection). Gate it behind a toggle so release builds stay quiet.

```cpp
static void verbose(const char* fmt, ...);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/log/log-verbose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/log/log-verbose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
