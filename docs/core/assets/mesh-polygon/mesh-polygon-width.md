[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshPolygon
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshPolygon](mesh-polygon.md).width

Derived pixel width of the built polygon. A CharacterController script reads `width` after `createPolygon` to check the chest emblem fits the jersey print area before approving the outfit swap.

```cpp
unsigned int getWidth();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-width.h"
```
