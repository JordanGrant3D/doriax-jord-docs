[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).createCylinderShape()

Creates an upright cylinder collider. Less stable than capsules on uneven ground; prefer capsules for characters.

```cpp
int createCylinderShape(float halfHeight, float radius);
int createCylinderShape(Vector3 position, Quaternion rotation, float halfHeight, float radius);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-cylinder-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-cylinder-shape.h"
```
