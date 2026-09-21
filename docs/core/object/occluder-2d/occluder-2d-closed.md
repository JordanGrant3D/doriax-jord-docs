[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
