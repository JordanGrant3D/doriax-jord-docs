[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).getWorldAABB

World-space bounds after transforms. A CharacterController script tests `getWorldAABB` against the camera frustum each frame to decide whether the hero needs the high-detail outfit.

```cpp
AABB getWorldAABB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-world-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-world-aabb.h"
```
