[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).draw

Issues mesh draw work for the frame. A CharacterController script never calls it directly, but the kit-preview turntable spins only while the system draw step runs each frame.

```cpp
void draw() override;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-draw.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-draw.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
