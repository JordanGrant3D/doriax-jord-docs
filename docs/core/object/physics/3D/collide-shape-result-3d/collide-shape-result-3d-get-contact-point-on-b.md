[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
CollideShapeResult3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [CollideShapeResult3D](collide-shape-result-3d.md).getContactPointOnB()

World-space contact point on the second shape. Use it to preview where on the ground or platform the character will land.

```cpp
Vector3 getContactPointOnB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-contact-point-on-b.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-contact-point-on-b.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
