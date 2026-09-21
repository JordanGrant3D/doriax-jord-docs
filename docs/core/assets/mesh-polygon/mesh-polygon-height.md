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

## [MeshPolygon](mesh-polygon.md).height

Derived pixel height of the built polygon. A CharacterController script reads `height` alongside `width` to keep custom badges inside the polygon-count budget for the back print.

```cpp
unsigned int getHeight();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-height.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-height.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
