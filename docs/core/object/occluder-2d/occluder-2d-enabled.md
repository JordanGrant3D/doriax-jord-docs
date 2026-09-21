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

## [Occluder2D](occluder-2d.md).isEnabled

Toggles the occluder without removing the component; disabled occluders cast no shadows. The stealth gallery disables walls during blackouts so guards lose cover.

```cpp
void setEnabled(bool enabled);
bool isEnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-enabled.h"
```
