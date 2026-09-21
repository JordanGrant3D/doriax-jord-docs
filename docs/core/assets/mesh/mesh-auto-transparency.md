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

## [Mesh](mesh.md).autoTransparency

Whether transparency is derived automatically from texture alpha. A CharacterController script leaves it on for visor glass outfits and turns it off for the opaque tournament plate.

```cpp
void setAutoTransparency(bool autoTransparency);
bool isAutoTransparency() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-auto-transparency.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-auto-transparency.h"
```
