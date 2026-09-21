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

## [Log](log.md).warn(const char* fmt, ...)

Recoverable-problem warning. Flags corrupt-but-survivable input (bad mouse reading, drifted plane) where the script holds its last good state and carries on.

```cpp
static void warn(const char* fmt, ...);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/log/log-warn.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/log/log-warn.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
