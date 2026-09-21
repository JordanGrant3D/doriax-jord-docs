---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Occluder2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Occluder2D](occluder-2d.md).setClosed

Toggles whether the last polygon point connects back to the first. The stealth gallery leaves patrol tripwires open (`false`) and keeps shadow walls closed (`true`). Only affects `POLYGON` shape.

```cpp
void setClosed(bool closed);
bool isClosed() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-closed.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-closed.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
