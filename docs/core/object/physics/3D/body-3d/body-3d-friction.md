[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).friction

Surface sliding resistance shared across all shapes on this body. Higher values stop the character faster on landing.

```cpp
float getFriction() const;
void setFriction(float friction);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-friction.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-friction.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
