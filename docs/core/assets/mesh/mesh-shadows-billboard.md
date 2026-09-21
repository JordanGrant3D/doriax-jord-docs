[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).shadowsBillboard

Whether the shadow pass treats the mesh as a billboard. A CharacterController script enables it for the nameplate quad above the hero so its blob shadow tracks the camera.

```cpp
void setShadowsBillboard(bool shadowsBillboard);
bool isShadowsBillboard() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-shadows-billboard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-shadows-billboard.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
