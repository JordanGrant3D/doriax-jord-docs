[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact3D](contact-3d.md).getBaseOffset()

Base offset of the manifold in world space. A contact far below the character origin backs up a stepped-down landing.

```cpp
Vector3 getBaseOffset() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-base-offset.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-base-offset.h"
```
