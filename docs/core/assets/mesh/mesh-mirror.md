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

## [Mesh](mesh.md).mirror

Turns the mesh into a planar mirror with an optional [**Vector3**](../../../core/maths/vector3/vector3.md) normal. A CharacterController script marks the locker-room mirror wall with `setAsMirror`, then calls `removeMirror` when the level unloads, guarding with `isMirror`.

```cpp
void setAsMirror();
void setAsMirror(Vector3 normal);
void removeMirror();
bool isMirror() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-mirror.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-mirror.h"
```
