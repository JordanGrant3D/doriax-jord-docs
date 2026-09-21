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

## [Log](log.md).error(const char* fmt, ...)

Fatal-error log. Reports unrecoverable setup failures (missing camera, null scene handles) before bailing out of the update.

```cpp
static void error(const char* fmt, ...);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/log/log-error.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/log/log-error.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
