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

## [MeshPolygon](mesh-polygon.md).flipY

Vertical flip of the polygon UVs. A CharacterController script enables it when the emblem texture imports upside down, verifying with `isFlipY` before locking the outfit.

```cpp
void setFlipY(bool flipY);
bool isFlipY() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-flip-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-polygon/mesh-polygon-flip-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
