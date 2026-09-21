---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
MeshPolygon
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshPolygon](mesh-polygon.md).addVertex

Queues one 2D outline vertex for the next `createPolygon` rebuild. A CharacterController script traces jersey numbers point by point, using the [**Vector3**](../../../core/maths/vector3/vector3.md) overload for scanned outlines and the `x, y` overload for hand-placed badge corners.

```cpp
void addVertex(Vector3 vertex);
void addVertex(float x, float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-add-vertex.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-add-vertex.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
