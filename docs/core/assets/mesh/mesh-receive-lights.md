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

## [Mesh](mesh.md).receiveLights

Whether dynamic lights affect the character. A CharacterController script disables light reception during a night-vision power-up so the hero renders flat, then re-enables it when the effect ends.

```cpp
void setReceiveLights(bool receiveLights);
bool isReceiveLights() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-receive-lights.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-receive-lights.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
