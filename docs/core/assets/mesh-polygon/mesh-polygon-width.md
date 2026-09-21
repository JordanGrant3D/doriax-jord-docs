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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
