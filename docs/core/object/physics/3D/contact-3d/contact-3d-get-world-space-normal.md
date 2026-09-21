---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
