[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
