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
