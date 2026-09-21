[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact3D](contact-3d.md).getWorldSpaceNormal()

Contact normal in world space. It points up on floors, so a high Y means the character has landed.

```cpp
Vector3 getWorldSpaceNormal() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-world-space-normal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-world-space-normal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
