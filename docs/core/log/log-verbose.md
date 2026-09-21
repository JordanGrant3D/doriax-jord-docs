[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
