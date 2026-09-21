---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).getWorldRight()

Right vector in world space. Strafe the chase boom along it for a shoulder view that survives tilted or parented rigs.

```cpp
Vector3 getWorldRight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-world-right.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-world-right.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
