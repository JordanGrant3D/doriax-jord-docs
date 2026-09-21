---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).windingOrder

Front-face winding (`CCW` by default). A CharacterController script restores `CCW` after importing a fan-made outfit whose triangles were authored clockwise, verified through `getWindingOrder`.

```cpp
void setWindingOrder(WindingOrder windingOrder);
WindingOrder getWindingOrder() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-winding-order.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-winding-order.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
