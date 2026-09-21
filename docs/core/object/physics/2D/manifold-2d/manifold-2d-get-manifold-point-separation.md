[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Manifold2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Manifold2D](manifold-2d.md).getManifoldPointSeparation()

Gap (positive) or overlap (negative) at point `index`. Deep negative values mean the character is sinking into the surface.

```cpp
float getManifoldPointSeparation(int32_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-separation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-separation.h"
```
